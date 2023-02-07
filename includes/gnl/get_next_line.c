/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:50:42 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/11/27 21:53:49 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_joinandfree(char *str, char *buffer)
{
	char	*tmp;

	tmp = ft_strjoin(str, buffer);
	free (str);
	return (tmp);
}

char	*ft_readfile(int fd, char *str)
{
	char	*buffer;
	int		read_bytes;

	if (!str)
		str = ft_calloc(1, 1);
	read_bytes = 1;
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	while (read_bytes > 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free (str);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		str = ft_joinandfree(str, buffer);
		if (ft_strchr(buffer, '\n'))
			break;
	}
	free (buffer);
	return (str);
}

char	*ft_getline(char *str)
{
	char	*line;
	int		i;
	int		j;

	i = 0;
	if (str[i] == '\0')
		return (NULL);
	j = 0;
	while (str[i] && str[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (str[i] && str[i] != '\n')
		line[j++] = str[i++];
	if (str[i] && str[i] == '\n')
		line[j++] = '\n';
	return (line);
}

char	*ft_delline(char *str)
{
	char	*buffer;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!str)
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\0')
	{
		free (str);
		return (NULL);
	}
	buffer = ft_calloc(ft_strlen(str) - i + 1, sizeof(char));
	i += 1;
	while (str[i])
		buffer[j++] = str[i++];
	free (str);
	return (buffer);
}

char	*get_next_line(int fd)
{
    static char *save;
    char        *line;

    if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
        return (NULL);
    save = ft_readfile(fd, save);
	if (!save)
		return (NULL);
	line = ft_getline(save);
	save = ft_delline(save);
	return (line);
}

/*
int main(void)
{
	int fd;

	fd = open("text.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
}
*/
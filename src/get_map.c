/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 19:26:44 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/20 18:17:13 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	check_file(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '.')
		i++;
	if (str[i + 1] != 'b')
		ft_error("Bad extension.");
	if (str[i + 2] != 'e')
		ft_error("Bad extension.");
	if (str[i + 3] != 'r')
		ft_error("Bad extension.");
}

static void	check_fd(int fd)
{
	if (fd < 0)
		ft_error("Error");
}

char	**get_map(char *fmap)
{
	char	*line;
	char	*all_lines;
	int		fd;
	char	**result;

	check_file(fmap);
	line = "";
	all_lines = ft_strdup("");
	fd = open(fmap, O_RDONLY);
	check_fd(fd);
	while (line)
	{
		line = get_next_line(fd);
		if (line == NULL || line[0] == '\n')
			break ;
		all_lines = ft_strjoin(all_lines, line);
		free(line);
	}
	free(line);
	close(fd);
	if (all_lines[0] == '\0')
		ft_error("Error");
	result = ft_split(all_lines, '\n');
	free(all_lines);
	return (result);
}

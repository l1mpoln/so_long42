/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:48:45 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/09 14:20:42 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	check_rectangular(t_map *map)
{
	int	x;
	int	y;

	y = find_y(map);
	x = find_and_check_x(map);
	if (x == y)
		ft_error("Incorrect map");
	map->height = x;
	map->weight = y;
}

static char	**create_array_of_lines(char *map_file)
{
	char	*line;
	char	*lines;
	int		fd;

	fd = open(map_file, O_RDONLY);
	line = "";
	lines = "";
	while (line)
	{
		line = get_next_line(fd);
		if (line[0] == '\n')
			break ;
		lines = ft_strjoin(lines, line);
		free(line);
	}
	free(line);
	if (lines == '\0')
		ft_error("Bad map.");
	return (ft_split(lines, '\n'));
}

void	check_map(char *argument, t_map *map)
{
	map->mappdata = create_array_of_lines(argument);
	check_rectangular(map);
	check_surrounding(map);
	check_resources(map);
}

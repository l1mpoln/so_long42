/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:48:45 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/07 13:48:45 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static char **create_array_of_lines(char *map_file)
{
    char    *line;
    char    *lines;
    int     fd;

    fd = open(map_file, O_RDONLY);
    line = "";
    lines = "";
    while (line)
    {
        line = get_next_line(fd);
        if (line[0] = '\n')
            break;
        lines = ft_strjoin(lines, line);
        free(line);
    }
    free(line);
    if (lines == '\0')
        ft_error("Bad map.");
    return (ft_split(lines, '\n'));
}

void check_map(char *argument, t_map *map)
{
    if (!ft_strchr(argument, ".ber"))
        ft_error("Invalid map extension.");
    map->mappdata = create_array_of_lines(argument); // create an array of lines for easier work with it
}
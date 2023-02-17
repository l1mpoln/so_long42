/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:09:57 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/17 21:32:41 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	check_all_top(t_map *map)
{
	if (map->mappdata[map->player_position_x - 1]
		[map->player_position_y] == '1')
		return (0);
	if (map->mappdata[map->player_position_x - 1]
		[map->player_position_y] == 'C')
	{
		map->current_score = map->current_score + 1;
		mlx_put_image_to_window(map->mlx, map->window, map->floor,
			map->player_position_y * 50, (map->player_position_x - 1) * 50);
	}
	return (1);
}

void	height_weight(t_map *map)
{
	size_t	x;
	int		y;

	x = 0;
	y = 0;
	while (map->mappdata[y])
		y++;
	map->height = y - 1;
	x = ft_strlen(map->mappdata[0]);
	y = 0;
	while (map->mappdata[y])
	{
		if (ft_strlen(map->mappdata[y]) != x)
			ft_error("Bad map.");
		y++;
	}
	map->weight = x - 1;
	if (map->weight == map->height)
		ft_error("Bad map.");
}

void	ft_error(char *error)
{
	printf("%s", error);
	exit(1);
}

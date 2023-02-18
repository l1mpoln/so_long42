/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:09:57 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/18 18:04:44 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	stay_on_exit(t_map *map)
{
	if (map->mappdata[map->player_position_x]
		[map->player_position_y] == 'E')
		return (1);
	else
		return (0);
}

void	end_game(t_map *map)
{
	mlx_destroy_window(map->mlx, map->window);
	exit(1);
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

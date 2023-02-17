/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moovement.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:29:00 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/17 21:32:21 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	go_top(t_map *map)
{
	if (!check_all_top(map))
		return ;
	mlx_put_image_to_window(map->mlx, map->window, map->player,
		map->player_position_y * 50, (map->player_position_x - 1) * 50);
	mlx_put_image_to_window(map->mlx, map->window, map->floor,
		map->player_position_y * 50, map->player_position_x * 50);
	map->player_position_x = map->player_position_x - 1;
	map->steps = map->steps + 1;
}

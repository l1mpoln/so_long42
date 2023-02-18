/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:45:09 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/18 17:53:19 by vkuzmin          ###   ########.fr       */
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
	if (map->mappdata[map->player_position_x - 1]
		[map->player_position_y] == 'E')
	{
		if (map->current_score == map->score)
			end_game(map);
		else
			return (1);
	}
	return (1);
}

int	check_all_left(t_map *map)
{
	if (map->mappdata[map->player_position_x]
		[map->player_position_y - 1] == '1')
		return (0);
	if (map->mappdata[map->player_position_x]
		[map->player_position_y - 1] == 'C')
	{
		map->current_score = map->current_score + 1;
		mlx_put_image_to_window(map->mlx, map->window, map->floor,
			(map->player_position_y - 1) * 50, map->player_position_x * 50);
	}
	if (map->mappdata[map->player_position_x]
		[map->player_position_y - 1] == 'E')
	{
		if (map->current_score == map->score)
			end_game(map);
		else
			return (1);
	}	
	return (1);
}

int	check_all_right(t_map *map)
{
	if (map->mappdata[map->player_position_x]
		[map->player_position_y + 1] == '1')
		return (0);
	if (map->mappdata[map->player_position_x]
		[map->player_position_y + 1] == 'C')
	{
		map->current_score = map->current_score + 1;
		mlx_put_image_to_window(map->mlx, map->window, map->floor,
			(map->player_position_y + 1) * 50, map->player_position_x * 50);
	}
	if (map->mappdata[map->player_position_x]
		[map->player_position_y + 1] == 'E')
	{
		if (map->current_score == map->score)
			end_game(map);
		else
			return (1);
	}	
	return (1);
}

int	check_all_bot(t_map *map)
{
	if (map->mappdata[map->player_position_x + 1]
		[map->player_position_y] == '1')
		return (0);
	if (map->mappdata[map->player_position_x + 1]
		[map->player_position_y] == 'C')
	{
		map->current_score = map->current_score + 1;
		mlx_put_image_to_window(map->mlx, map->window, map->floor,
			map->player_position_y * 50, (map->player_position_x + 1) * 50);
	}
	if (map->mappdata[map->player_position_x + 1]
		[map->player_position_y] == 'E')
	{
		if (map->current_score == map->score)
			end_game(map);
		else
			return (1);
	}	
	return (1);
}

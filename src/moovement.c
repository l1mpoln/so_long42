/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moovement.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 20:29:00 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/20 19:13:10 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	go_top(t_map *map)
{
	if (!check_all_top(map))
		return ;
	if (stay_on_exit(map))
	{
		mlx_put_image_to_window(map->mlx, map->window, map->player,
			map->player_position_y * 50, (map->player_position_x - 1) * 50);
		mlx_put_image_to_window(map->mlx, map->window, map->exit,
			map->player_position_y * 50, map->player_position_x * 50);
		map->player_position_x = map->player_position_x - 1;
		map->steps = map->steps + 1;
		ft_steps(map);
		return ;
	}
	mlx_put_image_to_window(map->mlx, map->window, map->player,
		map->player_position_y * 50, (map->player_position_x - 1) * 50);
	mlx_put_image_to_window(map->mlx, map->window, map->floor,
		map->player_position_y * 50, map->player_position_x * 50);
	map->player_position_x = map->player_position_x - 1;
	map->steps = map->steps + 1;
	ft_steps(map);
}

void	go_left(t_map *map)
{
	if (!check_all_left(map))
		return ;
	if (stay_on_exit(map))
	{
		mlx_put_image_to_window(map->mlx, map->window, map->player,
			(map->player_position_y - 1) * 50, map->player_position_x * 50);
		mlx_put_image_to_window(map->mlx, map->window, map->exit,
			map->player_position_y * 50, map->player_position_x * 50);
		map->player_position_y = map->player_position_y - 1;
		map->steps = map->steps + 1;
		ft_steps(map);
		return ;
	}
	mlx_put_image_to_window(map->mlx, map->window, map->player,
		(map->player_position_y - 1) * 50, map->player_position_x * 50);
	mlx_put_image_to_window(map->mlx, map->window, map->floor,
		map->player_position_y * 50, map->player_position_x * 50);
	map->player_position_y = map->player_position_y - 1;
	map->steps = map->steps + 1;
	ft_steps(map);
}

void	go_right(t_map *map)
{
	if (!check_all_right(map))
		return ;
	if (stay_on_exit(map))
	{
		mlx_put_image_to_window(map->mlx, map->window, map->player,
			(map->player_position_y + 1) * 50, map->player_position_x * 50);
		mlx_put_image_to_window(map->mlx, map->window, map->exit,
			map->player_position_y * 50, map->player_position_x * 50);
		map->player_position_y = map->player_position_y + 1;
		map->steps = map->steps + 1;
		ft_steps(map);
		return ;
	}
	mlx_put_image_to_window(map->mlx, map->window, map->player,
		(map->player_position_y + 1) * 50, map->player_position_x * 50);
	mlx_put_image_to_window(map->mlx, map->window, map->floor,
		map->player_position_y * 50, map->player_position_x * 50);
	map->player_position_y = map->player_position_y + 1;
	map->steps = map->steps + 1;
	ft_steps(map);
}

void	go_bot(t_map *map)
{
	if (!check_all_bot(map))
		return ;
	if (stay_on_exit(map))
	{
		mlx_put_image_to_window(map->mlx, map->window, map->player,
			map->player_position_y * 50, (map->player_position_x + 1) * 50);
		mlx_put_image_to_window(map->mlx, map->window, map->exit,
			map->player_position_y * 50, map->player_position_x * 50);
		map->player_position_x = map->player_position_x + 1;
		map->steps = map->steps + 1;
		ft_steps(map);
		return ;
	}
	mlx_put_image_to_window(map->mlx, map->window, map->player,
		map->player_position_y * 50, (map->player_position_x + 1) * 50);
	mlx_put_image_to_window(map->mlx, map->window, map->floor,
		map->player_position_y * 50, map->player_position_x * 50);
	map->player_position_x = map->player_position_x + 1;
	map->steps = map->steps + 1;
	ft_steps(map);
}

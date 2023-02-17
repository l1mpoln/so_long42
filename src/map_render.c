/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_render.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 16:04:26 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/17 20:48:30 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	create_images(t_map *map)
{
	int	xy[2];

	map->wall = mlx_xpm_file_to_image(map->mlx, "./textures/wall.xpm",
			&xy[0], &xy[1]);
	map->exit = mlx_xpm_file_to_image(map->mlx, "./textures/exit.xpm",
			&xy[0], &xy[1]);
	map->coin = mlx_xpm_file_to_image(map->mlx, "./textures/coin.xpm",
			&xy[0], &xy[1]);
	map->player = mlx_xpm_file_to_image(map->mlx, "./textures/player.xpm",
			&xy[0], &xy[1]);
	map->floor = mlx_xpm_file_to_image(map->mlx, "./textures/floor.xpm",
			&xy[0], &xy[1]);
}

static void	parse_chars(char c, int x, int y, t_map *map)
{
	if (c == '1')
		mlx_put_image_to_window(map->mlx, map->window,
			map->wall, 50 * y, 50 * x);
	if (c == 'C')
	{
		mlx_put_image_to_window(map->mlx, map->window,
			map->floor, 50 * y, 50 * x);
		mlx_put_image_to_window(map->mlx, map->window,
			map->coin, 50 * y, 50 * x);
	}
	if (c == 'E')
		mlx_put_image_to_window(map->mlx, map->window,
			map->exit, 50 * y, 50 * x);
	if (c == '0')
		mlx_put_image_to_window(map->mlx, map->window,
			map->floor, 50 * y, 50 * x);
	if (c == 'P')
	{
		mlx_put_image_to_window(map->mlx, map->window,
			map->floor, 50 * y, 50 * x);
		mlx_put_image_to_window(map->mlx, map->window,
			map->player, 50 * y, 50 * x);
	}
}

void	map_render(t_map *map)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	create_images(map);
	while (map->mappdata[x])
	{
		while (map->mappdata[x][y] != '\n')
		{
			parse_chars(map->mappdata[x][y], x, y, map);
			y++;
		}
		y = 0;
		x++;
	}
}

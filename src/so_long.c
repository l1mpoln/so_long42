/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:58:08 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/17 17:49:14 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	main(int argc, char **argv)
{
	t_map	map;

	if (argc != 2)
		ft_error("Invalid number of arguments.");
	map.mappdata = get_map(argv[1]);
	check_map(&map);
	map.mlx = mlx_init();
	map.window = mlx_new_window(map.mlx,
			(map.weight + 1) * 50, (map.height + 1) * 50, "so-long");
	map_render(&map);
	mlx_loop(map.mlx);
}

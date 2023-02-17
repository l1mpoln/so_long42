/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_handling.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:54:09 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/17 21:33:12 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	key_hook(int key, t_map *map)
{
	if (key == W)
		go_top(map);
	return (0);
}

void	keys_handling(t_map *map)
{
	mlx_hook(map->window, 2, 0, key_hook, map);
	mlx_loop(map->mlx);
}

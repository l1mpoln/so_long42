/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_handling.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:54:09 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/22 15:21:21 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	key_hook(int key, t_map *map)
{
	if (key == W || key == ARROW_UP)
		go_top(map);
	if (key == A || key == ARROW_LEFT)
		go_left(map);
	if (key == D || key == ARROW_RIGHT)
		go_right(map);
	if (key == S || key == ARROW_BOT)
		go_bot(map);
	if (key == 53)
		end_game(map);
	return (0);
}

void	keys_handling(t_map *map)
{
	mlx_hook(map->window, 2, 0, key_hook, map);
	mlx_hook(map->window, 17, 0, end_game, map);
	mlx_loop(map->mlx);
}

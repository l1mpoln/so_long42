/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_handling.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 19:54:09 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/21 12:37:18 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	key_hook(int key, t_map *map)
{
	printf("%d\n", key);
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
	mlx_loop(map->mlx);
}

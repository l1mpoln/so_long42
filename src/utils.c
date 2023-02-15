/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:09:57 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/15 15:56:54 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	height_weight(t_map *map)
{
	size_t	x;
	int		y;

	x = 0;
	y = 0;
	while (map->mappdata[y])
		y++;
	map->height = y;
	x = ft_strlen(map->mappdata[0]);
	y = 0;
	while (map->mappdata[y])
	{
		if (ft_strlen(map->mappdata[y]) != x)
			ft_error("Bad map.");
		y++;
	}
	map->weight = x;
}

void	ft_error(char *error)
{
	printf("%s", error);
	exit(1);
}

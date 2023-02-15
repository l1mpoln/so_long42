/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:42:14 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/15 16:10:37 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	check_surrounding(t_map *map)
{
	int	i;

	i = 0;
	while (map->mappdata[0][i] != '\0')
	{
		if (map->mappdata[0][i] != '1')
			ft_error("Bad map.");
		i++;
	}
	i = 0;
	while (map->mappdata[map->height - 1][i] != '\0')
	{
		if (map->mappdata[map->height - 1][i] != '1')
			ft_error("Bad map.");
		i++;
	}
}

void	check_map(t_map *map)
{
	height_weight(map);
	check_surrounding(map);
}

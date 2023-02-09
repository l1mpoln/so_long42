/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_surrounding.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:39:22 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/09 14:22:28 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void	check_others(t_map *map)
{
	int	i;

	i = 1;
	while (i < map->weight)
	{
		if (map->mappdata[i][0] != '1' || map->mappdata[i][map->weight] != '1')
			ft_error("Incorrect map");
		else
			i++;
	}
}

static void	check_first_and_last(t_map *map)
{
	int	i;

	i = 0;
	while (map->mappdata[0] != '\0')
	{
		if (map->mappdata[0][i] == '1')
			i++;
		else
			ft_error("Map incorrect");
	}
	i = 0;
	while (map->mappdata[map->height] != '\0')
	{
		if (map->mappdata[map->height][i] == '1')
			i++;
		else
			ft_error("Map incorrect");
	}
}

void	check_surrounding(t_map *map)
{
	check_first_and_last(map);
	check_others(map);
}

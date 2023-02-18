/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_content.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 16:58:44 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/18 19:28:09 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	check_collectible(t_map *map)
{
	int	counter;
	int	i;
	int	n;

	n = 0;
	i = 0;
	counter = 0;
	while (i <= map->height)
	{
		while (map->mappdata[i][n] != '\0')
		{
			if (map->mappdata[i][n] == 'C')
				counter++;
			n++;
		}
		i++;
		n = 0;
	}
	if (counter < 1)
		ft_error("Bad map.");
	map->score = counter;
	map->current_score = 0;
}

static void	check_player(t_map *map)
{
	int	counter;
	int	i;
	int	n;

	n = 0;
	i = 0;
	counter = 0;
	while (i <= map->height)
	{
		while (map->mappdata[i][n] != '\0')
		{
			if (map->mappdata[i][n] == 'P')
			{	
				counter++;
				map->player_position_x = i;
				map->player_position_y = n;
			}
			n++;
		}
		i++;
		n = 0;
	}
	if (counter != 1)
		ft_error("Bad map.");
}

static void	check_exit(t_map *map)
{
	int	counter;
	int	i;
	int	n;

	n = 0;
	i = 0;
	counter = 0;
	while (i <= map->height)
	{
		while (map->mappdata[i][n] != '\0')
		{
			if (map->mappdata[i][n] == 'E')
				counter++;
			n++;
		}
		i++;
		n = 0;
	}
	if (counter != 1)
		ft_error("Bad map.");
}

void	check_content(t_map *map)
{
	check_player(map);
	check_exit(map);
	check_collectible(map);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_resources.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 19:10:55 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/09 14:22:10 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	check_c(t_map *map)
{
	int	i;
	int	n;
	int	counter;

	i = 0;
	n = 0;
	counter = 0;
	while (i < map->height)
	{
		while (map->mappdata[i][n] != '\0')
		{
			if (map->mappdata[i][n] == 'c')
			{
				counter++;
				n++;
			}
			n++;
		}
		i++;
	}
	return (counter);
}

static int	check_p(t_map *map)
{
	int	i;
	int	n;
	int	counter;

	i = 0;
	counter = 0;
	n = 0;
	while (i < map->height)
	{
		while (map->mappdata[i][n] != '\0')
		{
			if (map->mappdata[i][n] == 'p')
			{
				counter++;
				n++;
			}
			n++;
		}
		i++;
	}
	return (counter);
}

static int	check_e(t_map *map)
{
	int	i;
	int	n;
	int	counter;

	i = 0;
	n = 0;
	counter = 0;
	while (i < map->height)
	{
		while (map->mappdata[i][n] != '\0')
		{
			if (map->mappdata[i][n] == 'e')
			{
				counter++;
				n++;
			}
			n++;
		}
		i++;
	}
	return (counter);
}

void	check_resources(t_map *map)
{
	int	e;
	int	p;
	int	c;

	e = check_e(map);
	p = check_p(map);
	c = check_c(map);
	map->score = c;
	if (p != 1 || c == 0 || e < 1)
		ft_error("Invalid map");
}

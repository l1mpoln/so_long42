/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:09:57 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/09 13:39:40 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	count_latters(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	find_and_check_x(t_map *map)
{
	int	i;
	int	n;

	i = 0;
	while (map->mappdata[i] != NULL)
	{
		n = count_latters(map->mappdata[i]);
		if (map->mappdata[i + 1] == NULL)
		{
			if (i == 0)
				ft_error("Map is incorrect");
			else
				break ;
		}
		if (n != count_latters(map->mappdata[i + 1]))
			ft_error("Map is incorrect");
	}
	return (n);
}

int	find_y(t_map *map)
{
	int	i;

	i = 0;
	while (map->mappdata[i] != NULL)
		i++;
	return (i);
}

void	ft_error(char *error)
{
	ft_printf("%s", error);
	exit(1);
}

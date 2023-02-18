/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_everything.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:57:55 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/18 19:27:00 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	free_struct(t_map *map)
{
	int	i;

	i = 0;
	while (map->mappdata[i])
	{
		free(map->mappdata[i]);
		i++;
	}
	free(map->wall);
	free(map->floor);
	free(map->player);
	free(map->exit);
}

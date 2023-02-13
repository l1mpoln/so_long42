/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:56:05 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/13 16:23:26 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "./includes/libft/libft.h"
# include <stdio.h>

typedef struct s_map
{
	int		height;
	int		weight;
	int		player_position;
	int		score;
	int		current_score;
	char	**mappdata;
	int		enemypos;
	int		gameover;
}	t_map;

//utils
void	ft_error(char *error); //error message
int		find_y(t_map *map);
int		find_and_check_x(t_map *map);

//map
void	check_map(char *argument, t_map *map);
void	check_surrounding(t_map *map);
void	check_resources(t_map *map);

char	*get_next_line(int fd);

#endif

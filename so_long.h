/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:56:05 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/15 16:59:19 by vkuzmin          ###   ########.fr       */
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

//map
char	**get_map(char *map_file);
void	check_map(t_map *map);
void	check_content(t_map *map);

//gnl
char	*get_next_line(int fd);
void	height_weight(t_map *map);
#endif

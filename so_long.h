/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:56:05 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/18 19:31:11 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "./includes/libft/libft.h"
# include <stdio.h>
# include <mlx.h>

# define W 13
# define S 1
# define D 2
# define A 0

typedef struct s_map
{
	int		height;
	int		weight;
	int		player_position_x;
	int		player_position_y;
	int		score;
	int		current_score;
	int		steps;
	char	**mappdata;
	int		enemypos;
	void	*window;
	void	*mlx;
	void	*wall;
	void	*exit;
	void	*coin;
	void	*player;
	void	*floor;
}	t_map;

//utils
void	ft_error(char *error); //error message
void	end_game(t_map *map);
int		stay_on_exit(t_map *map);
void	ft_steps(t_map *map);

//map
char	**get_map(char *map_file);
void	check_map(t_map *map);
void	check_content(t_map *map);
void	map_render(t_map *map);

//gnl
char	*get_next_line(int fd);
void	height_weight(t_map *map);
void	keys_handling(t_map *map);

//moovement
void	go_top(t_map *map);
void	go_left(t_map *map);
void	go_right(t_map *map);
void	go_bot(t_map *map);
int		check_all_top(t_map *map);
int		check_all_left(t_map *map);
int		check_all_right(t_map *map);
int		check_all_bot(t_map *map);

//free
void	free_struct(t_map *map);

#endif

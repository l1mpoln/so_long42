/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:56:05 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/07 12:56:05 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
#define SO_LONG_H

# include "../includes/libft/libft.h"
# include "../includes/gnl/get_next_line.h"
# include "../includes/ft_printf/include/ft_printf.h"

typedef struct s_map
{
    int     height;
    int     weight;
    int     player_position;
    int     score;
    int     current_score;
    char    **mappdata;
    int     enemypos;
    int     gameover;
}   t_map;

//utils
void    ft_error(char *error); //error message
int     find_y(t_map *map);
int     find_and_check_x(t_map *map, int y);

//map
void check_map(char *argument, t_map *map);
void    check_surrounding(t_map *map);
void    check_resources(t_map *map);

#endif  
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:48:45 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/07 13:48:45 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

static void read_lines(char *map)
{
    int fd;
    char **lines;

    fd = open(map, O_RDONLY);
    //need to create arrat of lines and after check it
}

static void work_map(char *argument)
{
    if (!ft_strchr(argument, ".ber"))
        ft_error("Invalid map extension.");
    read_lines(argument); //read lines from file for easier checkout
}
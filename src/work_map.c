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

static void work_map(char *argument)
{
    if (!ft_strchr(argument, ".ber"))
        ft_error("Invalid map extension.");
    
}
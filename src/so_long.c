/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <zxcmasterass@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:58:08 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/07 12:58:08 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int main(int argc, char **argv)
{
    //here will be structure

    if (argc != 2)
        ft_error("Invalid number of arguments.");
    check_map(argv[1]); //check map(check valid, check extension etc.)
}
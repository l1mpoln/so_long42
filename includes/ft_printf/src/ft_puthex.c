/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:58:56 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/12/02 11:07:12 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_hex_len(unsigned int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		i++;
		num = num / 16;
	}
	return (i);
}

void	ft_hex(unsigned int num)
{	
	if (num >= 16)
	{
		ft_hex(num / 16);
		ft_hex(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + 48), 1);
		else
			ft_putchar_fd((num - 10 + 97), 1);
	}
}

int	ft_puthex(unsigned int i)
{
	int		len;

	len = 0;
	if (i == 0)
		len += write(1, "0", 1);
	else
	{
		ft_hex(i);
		len = ft_hex_len(i);
	}
	return (len);
}

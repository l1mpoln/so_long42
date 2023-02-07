/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:20:51 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/12/02 11:51:42 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_countlen(uintptr_t ptr)
{
	int	i;

	i = 0;
	while (ptr != 0)
	{
		i++;
		ptr = ptr / 16;
	}
	return (i);
}	

void	ft_printptr(uintptr_t ptr)
{
	if (ptr >= 16)
	{
		ft_printptr(ptr / 16);
		ft_printptr(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
		{
			ft_putchar_fd((ptr + 48), 1);
		}
		else
			ft_putchar_fd((ptr - 10 + 97), 1);
	}
}

int	ft_putptr(unsigned long long ptr)
{
	int	result;

	result = 0;
	result += write(1, "0x", 2);
	if (ptr == 0)
		result += write(1, "0", 1);
	else
	{
		ft_printptr(ptr);
		result += ft_countlen(ptr);
	}
	return (result);
}

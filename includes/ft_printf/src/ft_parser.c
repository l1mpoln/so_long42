/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:57:31 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/12/02 11:41:17 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_parser(va_list args, const char type)
{
	int	result;

	result = 0;
	if (type == 'c')
		result += ft_putchar(va_arg(args, int));
	else if (type == 's')
		result += ft_putstr(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		result += ft_putnbr(va_arg(args, int));
	else if (type == 'p')
		result += ft_putptr(va_arg(args, unsigned long long));
	else if (type == 'u')
		result += ft_putunsigned(va_arg(args, unsigned int));
	else if (type == '%')
		result += write(1, "%", 1);
	else if (type == 'x')
		result += ft_puthex(va_arg(args, unsigned int));
	else if (type == 'X')
		result += ft_upperhex(va_arg(args, unsigned int));
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:43:26 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/12/01 13:27:20 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/ft_printf.h"

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;
	int		result;

	i = 0;
	result = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			result += ft_parser(args, s[i + 1]);
			i++;
		}
		else
			result += ft_putchar(s[i]);
			i++;
	}
	va_end(args);
	return (result);
}

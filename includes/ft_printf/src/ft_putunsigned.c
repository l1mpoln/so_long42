/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:04:25 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/12/01 16:11:11 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_ulen(unsigned int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		i++;
		num = num / 10;
	}
	return (i);
}

char	*ft_unsigned_itoa(unsigned int num)
{
	int		ulen;
	char	*result;

	ulen = ft_ulen(num);
	result = (char *) malloc(sizeof(char) * (ulen + 1));
	if (!result)
		return (0);
	result[ulen] = '\0';
	while (num != 0)
	{
		result[ulen - 1] = num % 10 + 48;
		ulen--;
		num /= 10;
	}
	return (result);
}

int	ft_putunsigned(unsigned int i)
{
	int		result;
	char	*num;

	result = 0;
	if (i == 0)
		result += write(1, "0", 1);
	else
	{
		num = ft_unsigned_itoa(i);
		result += ft_putstr(num);
		free (num);
	}
	return (result);
}

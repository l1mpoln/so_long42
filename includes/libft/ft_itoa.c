/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 19:37:34 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/11/16 11:56:56 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nlen(int n)
{
	int		len;
	long	nb;

	nb = n;
	len = 0;
	if (n == 0)
		return (1);
	if (nb < 0)
	{
		nb = nb * (-1);
		len++;
	}
	while (nb > 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*zero(int n, char *s)
{
	if (n == 0)
	{	
		s[0] = 48;
		return (s);
	}
	return (NULL);
}

char	*ft_itoa(int n)
{
	char	*s;
	long	nb;
	int		len;

	len = nlen(n);
	nb = n;
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len--] = '\0';
	if (n == 0)
		return (zero(n, s));
	if (nb < 0)
	{
		s[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		s[len--] = 48 + (nb % 10);
		nb /= 10;
	}
	return (s);
}

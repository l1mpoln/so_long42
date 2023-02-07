/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:21:35 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/11/10 11:13:28 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;
	size_t	i;

	dest2 = (char *)dest;
	src2 = (char *)src;
	i = -1;
	if (!dest && !src)
		return (NULL);
	if (dest2 > src2)
		while ((int)(--n) >= 0)
			dest2[n] = src2[n];
	else
		while (++i < n)
			dest2[i] = src2[i];
	return (dest);
}

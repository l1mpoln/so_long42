/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:05:28 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/11/18 13:30:42 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*dest;
	int		i;
	int		n;

	n = 0;
	i = 0;
	len = (ft_strlen (s1) + ft_strlen (s2));
	dest = (char *) malloc (len + 1);
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[n])
	{
		dest[i] = s2[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

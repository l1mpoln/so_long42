/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:54:37 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/11/15 17:54:39 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
char f(unsigned int n, char ch)
{
	if (ch >= 97 && ch <= 122)
	{
		ch -= 32;
		return (ch);
	} 
	if (ch >= 65 && ch <= 90)
	{
		ch += 32;
		return (ch);
	}
	else
	{
		return (ch);
	}
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *) malloc (ft_strlen (s) + 1);
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main(void)
{
	char *s = "HeLlO	 WoRlD";
	printf("%s", ft_strmapi(s, *f));
}
*/
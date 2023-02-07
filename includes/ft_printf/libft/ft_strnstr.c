/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:34:05 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/11/16 15:34:07 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	char s1[30] = "pen pineapple apple pen!";

// 	char* ptr = ft_strnstr(s1, "pine", 6);
// 	printf("%s\n", ptr);
// 	char* ptr1 = ft_strnstr(s1, "pine", 5);
// 	printf("%s\n", ptr1);

// 	return (0);
// }

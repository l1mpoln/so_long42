/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 14:33:02 by vkuzmin           #+#    #+#             */
/*   Updated: 2023/02/13 17:20:09 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# define BUFFER_SIZE 42

char			*get_next_line(int fd);
char			*ft_strjoin(char *s1, char const *s2);
unsigned int	ft_strlen(const char *str);
int				ft_index(const char *s, char c);
char			*ft_strdup(const char *s1);

#endif
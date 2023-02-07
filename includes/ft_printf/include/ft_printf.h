/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:49:35 by vkuzmin           #+#    #+#             */
/*   Updated: 2022/12/02 11:43:19 by vkuzmin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *s, ...);
int		ft_putchar(int c);
int		ft_parser(va_list args, const char type);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putptr(unsigned long long ptr);
void	ft_printptr(uintptr_t ptr);
int		ft_countlen(uintptr_t ptr);
int		ft_putunsigned(unsigned int i);
char	*ft_unsigned_itoa(unsigned int num);
int		ft_ulen(unsigned int i);
int		ft_puthex(unsigned int i);
void	ft_hex(unsigned int num);
int		ft_hex_len(unsigned int num);
int		ft_upperhex(unsigned int num);
void	ft_upphex(unsigned int num);
int		ft_upperhex_len(unsigned int num);

#endif
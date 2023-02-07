# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 11:48:51 by vkuzmin           #+#    #+#              #
#    Updated: 2022/12/01 18:37:29 by vkuzmin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



LIBFT = ./libft/libft.a

N_TEMP = temp.a

NAME = libftprintf.a

SRCS =  ft_printf.c \
		src/ft_parser.c \
		src/ft_putchar.c \
		src/ft_putnbr.c \
		src/ft_putptr.c \
		src/ft_putstr.c \
		src/ft_putunsigned.c \
		src/ft_puthex.c \
		src/ft_upperhex.c \
		
		
SURPL_O = 	ft_parser.o \
			ft_putchar.o \
			ft_putnbr.o \
			ft_putptr.o \
			ft_putstr.o \
			ft_putunsigned.o \
			ft_puthex.o \
			ft_upperhex.o

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./includes

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(MAKE) bonus -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(SURPL_O) 
	rm -rf $(OBJS)

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all
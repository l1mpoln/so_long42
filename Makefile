# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 13:20:54 by vkuzmin           #+#    #+#              #
#    Updated: 2023/02/13 17:03:06 by vkuzmin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	 = so_long
INCLUDES = includes
EXTLIB   = includes/libft
CC 		 = gcc

CFLAGS 	= -Wall -Wextra -Werror

SRCS 	=	./gnl/get_next_line.c ./gnl/get_next_line_utils.c \
			./src/check_map.c ./src/check_resources.c ./src/check_surrounding.c \
			./src/so_long.c ./src/utils.c

all: $(NAME)

$(NAME): $(EXTLIB)/libft.a $(SRCS:.c=.o)
	@$(CC) $^ -o $@

$(EXTLIB)/libft.a:
	@$(MAKE) -C $(EXTLIB) all

%.o:%.c
	@$(CC) $(CFLAGS) -I$(INCLUDES) -I$(EXTLIB)/incs -c $< -o $@

clean:
	@rm -f $(SRCS:.c=.o)

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(EXTLIB) fclean

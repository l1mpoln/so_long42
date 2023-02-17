# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 13:20:54 by vkuzmin           #+#    #+#              #
#    Updated: 2023/02/17 16:05:21 by vkuzmin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	 = so_long
INCLUDES = includes
EXTLIB   = includes/libft
CC 		 = gcc

CFLAGS 	= -Wall -Wextra -Werror

SRCS 	=	./gnl/get_next_line.c ./gnl/get_next_line_utils.c \
			./src/so_long.c ./src/utils.c ./src/get_map.c ./src/check_map.c \
			./src/check_content.c ./src/map_render.c

all: $(NAME)

$(NAME): $(EXTLIB)/libft.a $(SRCS:.c=.o)
	@$(CC) $^ -o $@

$(EXTLIB)/libft.a:
	@$(MAKE) -C $(EXTLIB) all

$(NAME) : $(OBJS)
	@$(CC) -lmlx -framework OpenGL -framework AppKit  $^ -o $@

%.o:%.c
	@$(CC) $(CFLAGS) -I$(INCLUDES) -I$(EXTLIB)/incs -c $< -o $@

clean:
	@rm -f $(SRCS:.c=.o)

fclean: clean
	@rm -f $(NAME)
	@$(MAKE) -C $(EXTLIB) fclean

re: fclean all
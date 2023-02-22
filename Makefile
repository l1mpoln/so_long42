# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 13:20:54 by vkuzmin           #+#    #+#              #
#    Updated: 2023/02/22 15:12:19 by vkuzmin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME     = so_long
INCLUDES = includes
EXTLIB   = includes/libft
CC       = gcc

CFLAGS   = -Wall -Wextra -Werror

SRCS     = ./gnl/get_next_line.c ./gnl/get_next_line_utils.c \
           ./src/so_long.c ./src/utils.c ./src/get_map.c ./src/check_map.c \
           ./src/check_content.c ./src/map_render.c ./src/keys_handling.c \
           ./src/moovement.c ./src/checking.c ./src/free_everything.c

OBJS     = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(EXTLIB)/libft.a $(OBJS)
	$(CC) -L $(EXTLIB) -lft -lmlx -framework OpenGL -framework AppKit $(OBJS) -o $(NAME)

$(EXTLIB)/libft.a:
	$(MAKE) -C $(EXTLIB) all

%.o:%.c
	$(CC) $(CFLAGS) -I $(INCLUDES) -I $(EXTLIB)/includes -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	$(MAKE) -C $(EXTLIB) fclean

re: fclean all

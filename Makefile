# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vkuzmin <vkuzmin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 13:20:54 by vkuzmin           #+#    #+#              #
#    Updated: 2023/02/09 14:16:58 by vkuzmin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
INCLUDES = includes
EXTLIB = $(INCLUDES)/libft
CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ./gnl/get_next_line.c ./gnl/get_next_line_utils.c \
		./src/check_map.c ./src/check_resources.c ./src/check_surrounding.c \
		./src/so_long.c ./src/utils.c

all: $(NAME)

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS) $(EXTLIB)/libft.a
	$(CC) $^ -o $@
	@echo "\[\033[4;35m                                                            \n\
	  ▄████████  ▄██████▄          ▄█          ▄██████▄  ███▄▄▄▄      ▄██████▄      \n\
	 ███    ███ ███    ███        ███         ███    ███ ███▀▀▀██▄   ███    ███     \n\
	 ███    █▀  ███    ███        ███         ███    ███ ███   ███   ███    █▀      \n\
	 ███        ███    ███        ███         ███    ███ ███   ███  ▄███            \n\
	███████████ ███    ███        ███         ███    ███ ███   ███ ▀▀███ ████▄      \n\
	        ███ ███    ███        ███         ███    ███ ███   ███   ███    ███     \n\
	  ▄█    ███ ███    ███        ███▌     ▄  ███    ███ ███   ███   ███    ███     \n\
	▄████████▀   ▀██████▀  █████  ███████▄▄██  ▀██████▀   ▀█   █▀    ████████▀      \n\
                                                                       	 		\033[0m"
	@echo "                                \033[44mBy: Ayoub0x1"

$(EXTLIB)/libft.a:
	@$(MAKE) -s -C $(EXTLIB) > /dev/null

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -I$(EXTLIB)/incs -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

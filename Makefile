# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/26 12:07:16 by yrodrigu          #+#    #+#              #
#    Updated: 2024/08/10 19:45:05 by yrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = utilities.c\
         fractol.c\
		 proccess_init.c\
		 renderize.c\
		 math_functions.c\
		 manage_events.c\

OFILES = $(CFILES:.c=.o)

MLX_DIR = minilibx-linux
MLX_LIB = $(MLX_DIR)/libmlx.a

all: fractol

fractol: $(MLX_LIB) $(OFILES)
	$(CC) $(CFLAGS) $(OFILES) -L$(MLX_DIR) -lmlx_Linux -lX11 -lXext -o fractol

$(MLX_LIB):
	$(MAKE) -C $(MLX_DIR)

%.o: %.c fractol.h 
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OFILES)
	$(MAKE) -C $(MLX_DIR) clean

fclean: clean
	rm -f fractol
	$(MAKE) -C $(MLX_DIR) fclean

re: fclean all

.PHONY: all clean fclean re

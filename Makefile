# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 16:07:27 by yrodrigu          #+#    #+#              #
#    Updated: 2024/08/03 13:38:16 by yrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/26 12:07:16 by yrodrigu          #+#    #+#              #
#    Updated: 2024/07/30 20:42:37 by yrodrigu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES = utilities.c\
		 fractol.c\

OFILES = $(CFILES:.c=.o)

all: fractol

fractol: $(OFILES)
		$(CC) $(CFLAGS) $(OFILES) -o fractol

%.o: %.c fractol.h 
		$(CC) $(CFLAGS) -c $<

clean:
		rm -f $(OFILES)

fclean: clean
		rm -f fractol
re: fclean all

.PHONY: all bonus clean fclean re

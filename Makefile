# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/01 16:07:27 by yrodrigu          #+#    #+#              #
#    Updated: 2024/08/01 18:03:57 by yrodrigu         ###   ########.fr        #
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
CFILES =

OFILES = $(CFILES:.c=.o)

CLIENT_OFILES = client.o ft_utilities.o
SERVER_OFILES = server.o ft_utilities.o

client: $(OFILES)
		$(CC) $(CFLAGS) $(CLIENT_OFILES) -o client

server: $(OFILES)
		$(CC) $(CFLAGS) $(SERVER_OFILES) -o server

%.o: %.c libft.h 
		$(CC) $(CFLAGS) -c $<

%bonus.o: %bonus.c  libft.h
		$(CC) $(CFLAGS) -c $<

clean:
		rm -f $(OFILES) $(BONUS_OFILES)

fclean: clean
		rm -f client server
re: fclean all

.PHONY: all bonus clean fclean re

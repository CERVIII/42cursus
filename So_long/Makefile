# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 16:19:25 by pcervill          #+#    #+#              #
#    Updated: 2022/05/23 14:32:01 by pcervill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	so_long

####FILES####

SRC		= 	so_long.c

OBJ 	= 	$(SRC:%.c=%.o)

####COMPILE####

CFLAGS 	= 	-Wall -Wextra -Werror 

CC		=	gcc

RM 		= 	rm -f

#####COMPILE TARGET####

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	
####TARGETS####

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) 
	$(RM) $(OBJ)

re: fclean all

.PHONY: fclean all clean re
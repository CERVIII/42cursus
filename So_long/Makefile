# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 16:19:25 by pcervill          #+#    #+#              #
#    Updated: 2022/05/24 14:11:08 by pcervill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	so_long

####FILES####

LIB_DIR		= ./lib/
LIB_NAME	= ./lib/lib.a

MLX_DIR		= ./mlx/

SRC		= 	./src/prueba.c

OBJ 	= 	$(SRC:%.c=%.o)

####COMPILE####

CFLAGS 	= 	-Wall -Wextra -Werror 

CC		=	gcc

RM 		= 	rm -f

#####COMPILE TARGET####

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	make -C $(LIB_DIR)
	make -C $(MLX_DIR)
	
####TARGETS####

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) 
	$(RM) $(OBJ)

re: fclean all

.PHONY: fclean all clean re

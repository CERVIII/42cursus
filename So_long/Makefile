# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 16:19:25 by pcervill          #+#    #+#              #
#    Updated: 2022/06/06 18:36:20 by pcervill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#### LIBFT ####

LIBFT_DIR	=	./lib/libft

LIBFT		=	$(LIBFT_DIR)/libft.a

#### GNL ####

GNL_DIR		=	./lib/get_next_line

GNL_N		=	$(GNL_DIR)/gnl.a

SRCGNL		=	get_next_line.c get_next_line_utils.c

OBJGNL		=	$(addprefix $(GNL_DIR)/, $(SRCGNL:.c=.o))

#### SPRITES ####

XPM_DIR		=	./Sprites

#### SO_LONG ####

NAME		=	so_long

SRC_DIR		=	./src

SRC			=	so_long.c check_map.c check_game.c print_map.c events.c

OBJ			=	$(addprefix $(SRC_DIR)/, $(SRC:.c=.o)) $(OBJGNL)

#### FLAGS ####

CFLAGS		=	-Wall -Wextra -Werror


$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(OBJ) -L ./lib/libft -l ft -lmlx -framework OpenGL -framework AppKit -o $(NAME)
	
$(LIBFT):
	make -C $(LIBFT_DIR) bonus

all : $(NAME)

run:
	./$(NAME) "map.ber"
	
clean:
	/bin/rm -f $(OBJ) $(GNL_N) $(OBJGNL)
	make -C $(LIBFT_DIR) clean
		
fclean: clean
	make -C $(LIBFT_DIR) fclean
	/bin/rm -f $(NAME) $(GNL_N) $(OBJGNL)

re: fclean all

.PHONY: all clean dclean re

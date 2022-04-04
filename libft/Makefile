# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcervill <pcervill@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 20:25:05 by pcervill          #+#    #+#              #
#    Updated: 2022/04/04 20:39:42 by pcervill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libft.a

####LINUX####

SONAME	=	libft.so

####FILES####

SRC		= 	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
		  	ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c \
			ft_strchr.c	ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
			ft_strrchr.c ft_tolower.c ft_toupper.c ft_atoi.c ft_memcmp.c \
			ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
			ft_strtrim.c ft_split.c

OBJ 	= 	$(SRC:%.c=%.o)

####COMPILE####

CFLAGS 	= 	-Wall -Wextra -Werror

CC		=	gcc

RM 		= 	rm -f

#####COMPILE TARGET####

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -c $(CFLAGS) $(SRC)
	ar rcs $(NAME) $(OBJ)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o $(SONAME) $(OBJ)

####TARGETS####

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME) $(SONAME) 
	$(RM) $(OBJ)

re: fclean all so

.PHONY: fclean all clean re so

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcervill <pcervill@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/25 20:25:05 by pcervill          #+#    #+#              #
#    Updated: 2022/04/11 14:12:38 by pcervill         ###   ########.fr        #
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
			ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
			ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c

OBJ 	= 	$(SRC:%.c=%.o)

OBJB	=	$(BONUS:%.c=%.o)

####COMPILE####

CFLAGS 	= 	-Wall -Wextra -Werror 

CC		=	gcc

RM 		= 	rm -f

B		=	.

#####COMPILE TARGET####

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -c $(CFLAGS) $(SRC)
	ar rcs $(NAME) $(OBJ)

bonus: $(B)
	
$(B):	$(OBJB) $(OBJ)
	$(CC) -c $(CFLAGS) $(SRC) $(BONUS)
	ar rcs $(NAME) $(OBJ) $(OBJB)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o $(SONAME) $(OBJ)

####TARGETS####

clean:
	$(RM) $(OBJ) $(OBJB)

fclean:
	$(RM) $(NAME) $(SONAME) 
	$(RM) $(OBJ) $(OBJB)

re: fclean all so bonus

.PHONY: fclean all clean re so bonus

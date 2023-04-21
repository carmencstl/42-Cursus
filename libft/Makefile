# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 12:01:36 by cacastil          #+#    #+#              #
#    Updated: 2023/04/21 12:47:03 by cacastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c\
		ft_memset.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strncmp.c ft_tolower.c \
		ft_toupper.c \

OBJCS = $(FILES:%.c=%.o)

FLAGS = -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c $(FILES) -I ./
	ar rc $(NAME) $(OBJCS)

all: $(NAME)

clean:
	rm -f $(OBJCS)
fclean: clean 
	rm -f $(NAME)

re: fclean all
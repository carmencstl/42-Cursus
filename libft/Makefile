# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cacastil <cacastil@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/20 12:01:36 by cacastil          #+#    #+#              #
#    Updated: 2023/04/26 14:00:57 by cacastil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_strdup.c\
		ft_memset.c ft_strlcat.c ft_strlcpy.c ft_strchr.c ft_substr.c\
		ft_strlen.c ft_strncmp.c ft_tolower.c ft_strrchr.c ft_strjoin.c\
		ft_toupper.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_calloc.c ft_strtrim.c ft_split.c\

OBJCS = $(FILES:%.c=%.o)

CC: gcc

CFLAGS = -Wall -Wextra -Werror
 
$(NAME): $(OBJCS)
	ar rc $(NAME) $(OBJCS)

all: $(NAME)

clean:
	rm -f $(OBJCS)
fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
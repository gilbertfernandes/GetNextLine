# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfernand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/23 09:37:03 by gfernand          #+#    #+#              #
#    Updated: 2019/07/09 10:20:24 by gfernand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libft.a

FLAGS =		-Wall -Werror -Wextra

FILESC = 	ft_atoi.c\
			ft_memdel.c\
			ft_strchr.c\
			ft_strmapi.c\
			ft_tolower.c\
			ft_bzero.c\
			ft_memmove.c\
			ft_strclr.c\
			ft_strncat.c\
			ft_toupper.c\
			ft_isalnum.c\
			ft_memset.c\
			ft_strcmp.c\
			ft_strncmp.c\
			ft_wordcount.c\
			ft_isalpha.c\
			ft_nbrlen.c\
			ft_strcpy.c\
			ft_strncpy.c\
			ft_wordlen.c\
			ft_isascii.c\
			ft_putchar.c\
			ft_strdel.c\
			ft_strnequ.c\
			ft_isdigit.c\
			ft_putchar_fd.c\
			ft_strdup.c\
			ft_strnew.c\
			ft_isprint.c\
			ft_putendl.c\
			ft_strequ.c\
			ft_strnstr.c\
			ft_itoa.c\
			ft_putendl_fd.c\
			ft_striter.c\
			ft_strrchr.c\
			ft_memccpy.c\
			ft_putnbr_fd.c\
			ft_strjoin.c\
			ft_strsplit.c\
			ft_memchr.c\
			ft_putstr.c\
			ft_strlcat.c\
			ft_strstr.c\
			ft_memcmp.c\
			ft_putstr_fd.c\
			ft_strlen.c\
			ft_strsub.c\
			ft_memcpy.c\
			ft_strcat.c\
			ft_strmap.c\
			ft_strtrim.c\
			ft_strdupdel.c\

OBJECTS =	$(FILESC:%.c=%.o)

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(FILESC)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

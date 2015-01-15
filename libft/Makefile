#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/04 17:52:57 by tfleming          #+#    #+#              #
#    Updated: 2015/01/15 15:16:54 by tfleming         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =			libft.a

CC =			gcc
FLAGS =			-Wall -Werror -Wextra -O3
INCLUDES =		"includes"

COMPILED =		ft_islower.o \
				ft_isupper.o \
				ft_tolower.o \
				ft_toupper.o \
				ft_isdigit.o \
				ft_isalnum.o \
				ft_isascii.o \
				ft_isprint.o \
				ft_isspace.o \
				ft_strlen.o \
				ft_strnlen.o \
				ft_strchr.o \
				ft_strrchr.o \
				ft_strcmp.o \
				ft_strncmp.o \
				ft_strstr.o \
				ft_strnstr.o \
				ft_strcpy.o \
				ft_strncpy.o \
				ft_strdup.o \
				ft_strcat.o \
				ft_strncat.o \
				ft_strlcat.o \
				ft_memcpy.o \
				ft_memccpy.o \
				ft_memmove.o \
				ft_memcmp.o \
				ft_memset.o \
				ft_memchr.o \
				ft_bzero.o \
				ft_atoi.o \
				ft_memalloc.o \
				ft_memdel.o \
				ft_strnew.o \
				ft_strdel.o \
				ft_strclr.o \
				ft_striter.o \
				ft_striteri.o \
				ft_strmap.o \
				ft_strmapi.o \
				ft_strequ.o \
				ft_strnequ.o \
				ft_strsub.o \
				ft_strjoin.o \
				ft_strtrim.o \
				ft_strsplit.o \
				ft_itoa.o \
				ft_putchar.o \
				ft_putstr.o \
				ft_putendl.o \
				ft_putnbr.o \
				ft_putchar_fd.o \
				ft_putstr_fd.o \
				ft_putendl_fd.o \
				ft_putnbr_fd.o \

all: $(NAME)

$(NAME): $(COMPILED)
	ar rc $(NAME) $(COMPILED)
	ranlib $(NAME)

$(COMPILED): %.o: %.c
	$(CC) -c $(FLAGS) $< -o $@ -I $(INCLUDES)

clean:
	-/bin/rm -f $(COMPILED)

fclean: clean
	-/bin/rm -f $(NAME)

re: fclean all

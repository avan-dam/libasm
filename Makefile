# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-dam <avan-dam@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/06/29 12:56:51 by avan-dam      #+#    #+#                  #
#    Updated: 2020/07/03 16:49:05 by avan-dam      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s ft_strcmp.s ft_strcpy.s ft_write.s ft_read.s ft_strdup.s

OFILES = $(SRCS:.s=.o)

INCLUDE = libasm.h

all: $(NAME)

$(NAME): $(OFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

%.o: %.s
	nasm -f macho64 $<
	
test: $(NAME) $(INCLUDE) main.c
	gcc -L. -lasm main.c -o test

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f test

re: fclean all

.PHONY: all clean fclean re
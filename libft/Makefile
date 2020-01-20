#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lvan-vlo <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/10 11:00:00 by lvan-vlo      #+#    #+#                  #
#    Updated: 2019/01/16 19:59:44 by lvan-vlo      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCS = *.c

HEAD = *.h

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRCS)
	ar r $(NAME) *.o $(HEAD)

clean:
	rm -rf *.o *~

fclean: clean
	rm -rf $(NAME)

re: fclean all
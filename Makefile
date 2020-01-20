# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/11 15:20:57 by lvan-vlo       #+#    #+#                 #
#    Updated: 2019/04/02 13:16:06 by lvan-vlo      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS = ft_fdf.c ft_convert_file.c ft_mlx.c ft_draw_map.c ft_color.c

NAME = fdf

INCL = -I fdf.h -L minilibx_macos -lmlx -L./libft -lft -framework OpenGL -framework AppKit

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	make -C libft/ fclean && make -C libft/
	make -C minilibx_macos/ re
	gcc -c $(FLAGS) $(SRCS) -I fdf.h
	gcc -o $(NAME) $(FLAGS) fdf_main.c *.o $(INCL)
	cat author
	norminette fdf_main.c $(SRCS) fdf.h

clean:
	rm -rf *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
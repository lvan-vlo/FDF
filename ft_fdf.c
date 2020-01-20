/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_fdf.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/11 15:30:41 by lvan-vlo       #+#    #+#                */
/*   Updated: 2019/03/19 15:20:04 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

char		**ft_read_file(char *title, int fd)
{
	char	**array;
	char	buf[BUFF_SIZE + 1];
	char	*file;
	char	*tmp;
	int		ret;

	file = ft_strnew(0);
	fd = open(title, O_RDONLY);
	if (fd < 1)
		ft_exit();
	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, buf, BUFF_SIZE);
		buf[ret] = '\0';
		tmp = ft_strjoin(file, buf);
		free(file);
		file = ft_strdup(tmp);
		free(tmp);
	}
	close(fd);
	array = ft_strsplit(file, '\n');
	free(file);
	return (array);
}

t_point		*ft_set_max(char **array, t_point *max)
{
	int y;

	y = 0;
	max->x = ft_wordcount(*array, ' ');
	while (array[y] != NULL)
		y++;
	max->y = y;
	return (max);
}

int			ft_scale(t_point *max)
{
	int		scale;

	if ((W_X / max->x) <= (W_Y / max->y))
		scale = (W_X - 400) / max->x;
	else
		scale = (W_Y - 400) / max->y;
	return (scale);
}

void		ft_fdf(char **av)
{
	t_point	**map;
	t_point	*max;
	char	**array;
	int		fd;
	int		scale;

	fd = 0;
	map = NULL;
	max = (t_point*)ft_memalloc(sizeof(t_point));
	array = ft_read_file(av[0], fd);
	max = ft_set_max(array, max);
	scale = ft_scale(max);
	map = ft_convert_file(array, map, max);
	ft_mlx(map, max, scale);
}

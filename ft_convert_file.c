/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_convert_file.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/11 17:32:27 by lvan-vlo       #+#    #+#                */
/*   Updated: 2019/03/19 15:12:54 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_next_coord(char *str, int i)
{
	while (str[i] != ' ' && str[i] != '\0')
		i++;
	while (str[i] == ' ')
		i++;
	return (i);
}

t_point	**ft_convert_file(char **array, t_point **map, t_point *max)
{
	t_point *c;

	c = (t_point*)ft_memalloc(sizeof(t_point));
	map = (t_point**)ft_memalloc(sizeof(t_point*) * max->y);
	while (array[c->y] != NULL)
	{
		map[c->y] = (t_point*)ft_memalloc(sizeof(t_point) * max->x);
		while (array[c->y][c->z] != '\0')
		{
			map[c->y][c->x].z = ft_atoi(&array[c->y][c->z]);
			map[c->y][c->x].y = c->y;
			map[c->y][c->x].x = c->x;
			c->z = ft_next_coord(array[c->y], c->z);
			c->x++;
		}
		c->x = 0;
		c->z = 0;
		c->y++;
	}
	free(c);
	ft_delmap(array);
	return (map);
}

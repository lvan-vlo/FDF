/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_color.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/16 10:47:39 by lvan-vlo       #+#    #+#                */
/*   Updated: 2019/03/21 18:44:14 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_color	*ft_color(t_hgt *z, t_fdf *fdf, int max)
{
	int		s;
	int		e;
	t_color	*c;

	s = 16776960;
	e = 16711680;
	c = (t_color*)ft_memalloc(sizeof(t_color));
	c->ks = (e - s) / (fdf->h->top - fdf->h->bot);
	c->bk = s + c->ks * z->bot;
	c->ek = s + c->ks * z->top;
	if (max != 0)
		c->ks = (c->ek - c->bk) / max;
	else
		c->ks = 0;
	free(z);
	return (c);
}

t_fdf	*ft_height(t_fdf *fdf)
{
	int i;
	int	x;
	int y;

	i = 0;
	while (i < fdf->max->y * fdf->max->x)
	{
		x = i % fdf->max->x;
		y = i / fdf->max->x;
		if (fdf->map[y][x].z > fdf->h->top)
			fdf->h->top = fdf->map[y][x].z;
		if (fdf->map[y][x].z < fdf->h->bot)
			fdf->h->bot = fdf->map[y][x].z;
		i++;
	}
	return (fdf);
}

t_hgt	*ft_z(int sz, int ez)
{
	t_hgt *z;

	z = (t_hgt*)ft_memalloc(sizeof(t_hgt));
	z->bot = sz;
	z->top = ez;
	return (z);
}

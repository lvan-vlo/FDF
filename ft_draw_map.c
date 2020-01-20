/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_draw_map.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/12 14:25:20 by lvan-vlo       #+#    #+#                */
/*   Updated: 2019/03/18 20:23:19 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_draw_line(t_float *f, int max, t_mlx *mlx, t_color *c)
{
	int i;

	i = 0;
	while (i < max)
	{
		mlx_pixel_put(mlx->mlx, mlx->win, (int)f->x, (int)f->y, \
			c->bk + (c->ks * i));
		f->x = f->x + f->xa;
		f->y = f->y + f->ya;
		i++;
	}
	free(c);
}

int		ft_max(t_point *d)
{
	int x;
	int y;

	x = d->x;
	y = d->y;
	if (x < 0)
		x = x * -1;
	if (y < 0)
		y = y * -1;
	if (x > y)
		return (x);
	return (y);
}

void	ft_line(t_point *start, t_point *end, t_fdf *fdf, t_hgt *z)
{
	t_point	*d;
	t_float	*f;
	int		i;
	int		max;

	d = (t_point*)ft_memalloc(sizeof(t_point));
	f = (t_float*)ft_memalloc(sizeof(t_float));
	d->x = end->x - start->x;
	d->y = end->y - start->y;
	f->x = (float)start->x;
	f->y = (float)start->y;
	i = 0;
	max = ft_max(d);
	f->xa = ((float)d->x / (float)max);
	f->ya = ((float)d->y / (float)max);
	ft_draw_line(f, max, fdf->mlx, ft_color(z, fdf, max));
	free(d);
	free(f);
	free(end);
}

t_point	*ft_calc(t_point *p, t_point *angle, t_point *max, t_scale *s)
{
	t_point *i;
	int		x;
	int		y;
	int		z;

	i = (t_point*)ft_memalloc(sizeof(t_point));
	x = (p->x * s->s) - (max->x * s->s / 2);
	y = (p->y * s->s) - (max->y * s->s / 2);
	z = p->z * s->s / 10 * s->z;
	i->x = x * cos(angle->z * M_PI / 180) - y * sin(angle->z * M_PI / 180);
	i->y = x * sin(angle->z * M_PI / 180) + y * cos(angle->z * M_PI / 180);
	i->z = z * cos(angle->x * M_PI / 180) - i->y * sin(angle->x * M_PI / 180);
	i->y = z * sin(angle->x * M_PI / 180) + i->y * cos(angle->x * M_PI / 180);
	x = i->x;
	i->x = x * cos(angle->y * M_PI / 180) - i->z * sin(angle->y * M_PI / 180);
	i->z = x * sin(angle->y * M_PI / 180) + i->z * cos(angle->y * M_PI / 180);
	i->x = i->x + W_X / 2 + s->x;
	i->y = i->y + W_Y / 2 + s->y;
	return (i);
}

void	ft_draw_map(t_fdf *f)
{
	t_point	*p;
	int		x;
	int		y;
	int		i;

	i = 0;
	while (i < f->max->y * f->max->x)
	{
		x = i % f->max->x;
		y = i / f->max->x;
		p = ft_calc(&f->map[y][x], f->angle, f->max, f->s);
		if (x + 1 < f->max->x)
		{
			ft_line(p, ft_calc(&f->map[y][x + 1], f->angle, f->max, f->s), \
				f, ft_z(f->map[y][x].z, f->map[y][x + 1].z));
		}
		if (y + 1 < f->max->y)
		{
			ft_line(p, ft_calc(&f->map[y + 1][x], f->angle, f->max, f->s), \
				f, ft_z(f->map[y][x].z, f->map[y + 1][x].z));
		}
		free(p);
		i++;
	}
}

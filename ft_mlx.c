/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_mlx.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/12 14:15:28 by lvan-vlo       #+#    #+#                */
/*   Updated: 2019/03/21 18:42:38 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_change_z(int key, t_fdf *fdf)
{
	if (key == 27)
		fdf->s->z--;
	if (key == 24)
		fdf->s->z++;
	if (key == 13)
		fdf->s->y += 20;
	if (key == 1)
		fdf->s->y -= 20;
	if (key == 0)
		fdf->s->x += 20;
	if (key == 2)
		fdf->s->x -= 20;
}

int		ft_key(int key, t_fdf *fdf)
{
	if (key == 53)
		exit(1);
	if (key == 69)
		fdf->s->s += 1;
	if (key == 78)
		fdf->s->s -= 1;
	if (key == 123)
		fdf->angle->y += 5;
	if (key == 124)
		fdf->angle->y -= 5;
	if (key == 126)
		fdf->angle->x -= 5;
	if (key == 125)
		fdf->angle->x += 5;
	if (key == 30)
		fdf->angle->z += 5;
	if (key == 33)
		fdf->angle->z -= 5;
	if (key == 27 || key == 24 || key == 13 || key == 0 || key == 1 || key == 2)
		ft_change_z(key, fdf);
	mlx_clear_window(fdf->mlx->mlx, fdf->mlx->win);
	ft_draw_map(fdf);
	return (0);
}

void	ft_mlx(t_point **map, t_point *max, int scale)
{
	t_fdf	*fdf;
	t_point	*angle;
	t_mlx	*mlx;

	fdf = (t_fdf*)ft_memalloc(sizeof(t_fdf));
	fdf->s = (t_scale*)ft_memalloc(sizeof(t_scale));
	angle = (t_point*)ft_memalloc(sizeof(t_point));
	mlx = (t_mlx*)ft_memalloc(sizeof(t_mlx));
	fdf->h = (t_hgt*)ft_memalloc(sizeof(t_hgt));
	mlx->mlx = mlx_init();
	mlx->win = mlx_new_window(mlx->mlx, W_X, W_Y, "fdf_42");
	fdf->map = map;
	fdf->angle = angle;
	fdf->max = max;
	fdf->mlx = mlx;
	fdf->s->s = scale;
	fdf = ft_height(fdf);
	ft_draw_map(fdf);
	mlx_hook(mlx->win, 2, 0, ft_key, fdf);
	mlx_loop(mlx->mlx);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fdf.h                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/11 15:18:15 by lvan-vlo       #+#    #+#                */
/*   Updated: 2019/04/02 13:15:40 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H
# define BUFF_SIZE 42
# define W_X 1920
# define W_Y 1080

# include <math.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "./minilibx_macos/mlx.h"
# include "./libft/libft.h"

typedef struct		s_float
{
	float			x;
	float			y;
	float			xa;
	float			ya;
}					t_float;

typedef struct		s_point
{
	int				x;
	int				y;
	int				z;
}					t_point;

typedef struct		s_mlx
{
	void			*mlx;
	void			*win;
}					t_mlx;

typedef	struct		s_scale
{
	int				s;
	int				x;
	int				y;
	int				z;
}					t_scale;

typedef struct		s_hgt
{
	int				bot;
	int				top;
}					t_hgt;

typedef struct		s_color
{
	int				bk;
	int				ek;
	int				ks;
}					t_color;

typedef struct		s_fdf
{
	t_point			**map;
	t_point			*angle;
	t_point			*max;
	t_mlx			*mlx;
	t_scale			*s;
	t_hgt			*h;
	t_color			*c;
}					t_fdf;

void				ft_fdf(char **av);
void				ft_exit(void);
t_point				**ft_convert_file(char **array, t_point **map, \
						t_point *max);
void				ft_delmap(char **array);
void				ft_mlx(t_point **map, t_point *max, int scale);
void				ft_draw_map(t_fdf *fdf);
t_color				*ft_color(t_hgt *z, t_fdf *fdf, int max);
t_fdf				*ft_height(t_fdf *fdf);
t_hgt				*ft_z(int sz, int ez);

#endif

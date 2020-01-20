/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   fdf_main.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/11 15:25:58 by lvan-vlo       #+#    #+#                */
/*   Updated: 2019/03/18 18:03:18 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	ft_exit(void)
{
	ft_putendl("usage: ./fdf [MAP]");
	exit(1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_exit();
	argv++;
	ft_fdf(argv);
	return (0);
}

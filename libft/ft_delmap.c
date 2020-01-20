/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_delmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/19 15:15:30 by lvan-vlo       #+#    #+#                */
/*   Updated: 2019/03/19 15:19:45 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_delmap(char **array)
{
	int i;

	i = 0;
	while (array[i] != NULL)
	{
		ft_strclr(array[i]);
		free(array[i]);
		i++;
	}
	free(array);
}

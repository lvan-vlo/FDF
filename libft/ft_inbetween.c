/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_inbetween.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/19 16:41:49 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/19 16:45:32 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_inbetween(int start, int end)
{
	int	*array;
	int i;

	array = malloc(sizeof(int) * (end - start));
	i = 0;
	start++;
	while (start < end)
	{
		array[i] = start;
		i++;
		start++;
	}
	array[i] = '\0';
	return (array);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 09:19:12 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/20 14:53:36 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*array;
	size_t	c;

	size++;
	c = 0;
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	while (c < size)
	{
		array[c] = '\0';
		c++;
	}
	return (array);
}

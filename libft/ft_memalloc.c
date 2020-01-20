/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 09:15:01 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/17 20:34:26 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*p;
	void	*array;
	size_t	c;

	c = 0;
	array = malloc(size);
	if (array == NULL)
		return (NULL);
	p = (char*)array;
	while (c < size)
	{
		p[c] = '\0';
		c++;
	}
	return (array);
}

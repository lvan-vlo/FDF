/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 11:05:31 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/12 11:09:22 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*res;
	size_t	i;
	char	*cs;

	cs = (char*)s;
	i = 0;
	while (i < n)
	{
		if (cs[i] == c)
		{
			res = &cs[i];
			return (res);
		}
		i++;
	}
	return (NULL);
}

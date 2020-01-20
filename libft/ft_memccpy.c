/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 08:40:21 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/20 13:43:28 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	void			*res;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	x;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == x)
		{
			i++;
			res = &dst[i];
			return (res);
		}
		i++;
	}
	return (NULL);
}

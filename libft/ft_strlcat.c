/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 16:13:27 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/19 12:16:04 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_catcpy(char *dst, const char *src, size_t n, size_t d)
{
	size_t c;

	c = 0;
	while (c < n)
	{
		dst[c + d] = src[c];
		c++;
	}
	dst[n] = '\0';
}

static size_t	ft_catlen2(char *dst, size_t size)
{
	size_t i;

	i = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	return (i);
}

static size_t	ft_catlen1(const char *src)
{
	size_t c;

	c = 0;
	while (src[c] != '\0')
		c++;
	return (c);
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	c;
	size_t	s;
	size_t	d;

	c = 0;
	s = ft_catlen1(src);
	d = ft_catlen2(dst, size);
	if (d == size - 1)
	{
		dst[d] = '\0';
		return (d + s);
	}
	if (d == size)
		return (size + s);
	if (s < (size - d))
	{
		while (c < s + 1)
		{
			dst[c + d] = src[c];
			c++;
		}
	}
	else
		ft_catcpy(dst, src, (size - 1), d);
	return (d + s);
}

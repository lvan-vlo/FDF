/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 12:37:00 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/11 08:03:01 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t c;

	c = 0;
	while (src[c] != '\0' && c < len)
	{
		dst[c] = src[c];
		c++;
	}
	if (src[c] == '\0')
	{
		while (c < len)
		{
			dst[c] = '\0';
			c++;
		}
	}
	return (dst);
}

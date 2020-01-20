/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/07 15:27:44 by lvan-vlo       #+#    #+#                */
/*   Updated: 2019/03/19 15:23:50 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_strccpy(void *dst, void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*dest;
	unsigned char	*source;

	dest = dst;
	source = src;
	i = 0;
	while (i < n)
	{
		if (*source == (unsigned char)c || *source == '\0')
		{
			*dest = '\0';
			return (&dst[0]);
		}
		*dest = *source;
		i++;
		dest++;
		source++;
	}
	return (0);
}

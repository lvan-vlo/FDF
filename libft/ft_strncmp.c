/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 14:55:49 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/17 20:02:00 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;
	size_t			c;

	one = (unsigned char*)s1;
	two = (unsigned char*)s2;
	c = 0;
	if (n == 0)
		return (0);
	while (one[c] == two[c] && (c + 1) < n)
	{
		if (one[c] == '\0' || two[c] == '\0')
			return (one[c] - two[c]);
		c++;
	}
	return (one[c] - two[c]);
}

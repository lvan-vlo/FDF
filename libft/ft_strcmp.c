/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 14:45:09 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/19 12:17:20 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int				c;
	unsigned char	*one;
	unsigned char	*two;

	one = (unsigned char*)s1;
	two = (unsigned char*)s2;
	c = 0;
	while (one[c] == two[c])
	{
		if (one[c] == '\0' || two[c] == '\0')
			return (one[c] - two[c]);
		c++;
	}
	return (one[c] - two[c]);
}

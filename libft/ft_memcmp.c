/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/12 11:10:03 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/17 13:52:36 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*one;
	unsigned char	*two;

	one = (unsigned char*)s1;
	two = (unsigned char*)s2;
	while (n > 0)
	{
		if (*one - *two != 0)
			return (*one - *two);
		one++;
		two++;
		n--;
	}
	return (0);
}

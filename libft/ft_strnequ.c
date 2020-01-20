/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnequ.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 10:43:27 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/17 20:45:31 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t c;

	c = 0;
	if (n == 0)
		return (1);
	while (s1[c] == s2[c] && c < n && s1[c] != '\0' && s2[c] != '\0')
		c++;
	if (c == n && s1[n - 1] == s2[n - 1])
		return (1);
	if (s1[c] == s2[c])
		return (1);
	return (0);
}

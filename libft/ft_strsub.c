/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsub.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 11:11:14 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/20 14:58:18 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	c;

	c = 0;
	sub = malloc(len + 1);
	if (sub == NULL)
		return (NULL);
	while (c < len)
	{
		if (c < len && s[start] == '\0')
			return (NULL);
		sub[c] = s[start];
		c++;
		start++;
	}
	sub[c] = '\0';
	return (sub);
}

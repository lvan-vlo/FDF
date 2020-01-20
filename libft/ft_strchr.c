/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 16:25:24 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/17 19:40:12 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	char	*t;
	int		i;

	t = (char*)s;
	i = 0;
	while (t[i] != '\0')
	{
		if (t[i] == c)
		{
			p = &t[i];
			return (p);
		}
		i++;
	}
	if (t[i] == c)
	{
		p = &t[i];
		return (p);
	}
	return (NULL);
}

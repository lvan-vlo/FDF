/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/08 08:06:18 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/20 14:02:40 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dup;
	int		x;

	x = 0;
	while (src[x] != '\0')
		x++;
	dup = malloc(sizeof(char) * x + 1);
	if (dup == NULL)
		return (NULL);
	x = 0;
	while (src[x] != '\0')
	{
		dup[x] = src[x];
		x++;
	}
	dup[x] = '\0';
	return (dup);
}

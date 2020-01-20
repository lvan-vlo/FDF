/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 10:26:59 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/20 14:57:41 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*array;
	unsigned int	c;

	array = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (array == NULL)
		return (NULL);
	c = 0;
	while (s[c] != '\0')
	{
		array[c] = f(c, s[c]);
		c++;
	}
	array[c] = '\0';
	return (array);
}

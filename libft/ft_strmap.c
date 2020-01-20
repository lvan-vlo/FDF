/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 10:22:06 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/20 14:56:31 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*array;
	size_t	c;

	array = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (array == NULL)
		return (NULL);
	c = 0;
	while (s[c] != '\0')
	{
		array[c] = f(s[c]);
		c++;
	}
	array[c] = '\0';
	return (array);
}

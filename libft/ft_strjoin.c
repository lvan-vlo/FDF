/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 11:20:00 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/20 14:59:59 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*array;
	int		c;
	int		i;

	array = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (array == NULL)
		return (NULL);
	c = 0;
	i = 0;
	while (s1[c] != '\0')
	{
		array[i] = s1[c];
		c++;
		i++;
	}
	c = 0;
	while (s2[c] != '\0')
	{
		array[i] = s2[c];
		i++;
		c++;
	}
	array[i] = '\0';
	return (array);
}

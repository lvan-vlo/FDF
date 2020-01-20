/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 11:28:25 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/20 15:04:37 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strtrmalloc(char const *s)
{
	int c;
	int i;

	i = 0;
	c = 0;
	while (s[c] != '\0')
		c++;
	c--;
	while (s[c] == ' ' || s[c] == '\t' || s[c] == '\n')
		c--;
	if (c + 1 == 0)
		return (0);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	return (c - i);
}

char		*ft_strtrim(char const *s)
{
	char	*array;
	int		c;
	int		i;
	int		x;

	if (!(array = malloc(sizeof(char) * ft_strtrmalloc(s) + 2)))
		return (NULL);
	c = 0;
	i = 0;
	x = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[c] != '\0')
		c++;
	c--;
	while (s[c] == ' ' || s[c] == '\t' || s[c] == '\n')
		c--;
	while (i < c + 1)
	{
		array[x] = s[i];
		x++;
		i++;
	}
	array[x] = '\0';
	return (array);
}

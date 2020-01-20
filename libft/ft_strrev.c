/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrev.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/19 16:30:29 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/19 16:34:36 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	*ret;
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
		i++;
	ret = malloc(sizeof(char) * i);
	i--;
	while (i >= 0)
	{
		ret[c] = str[i];
		c++;
		i--;
	}
	ret[c] = '\0';
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 16:12:45 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/20 14:45:12 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int c;
	int	res;
	int	n;

	n = 0;
	c = 0;
	res = 0;
	while (str[c] == ' ' || str[c] == '\n' || str[c] == '\v' || str[c] == '\r' \
		|| str[c] == '\f' || str[c] == '\t')
		c++;
	if (str[c] == '-')
		n = 1;
	if (str[c] == '-' || str[c] == '+')
		c++;
	while (str[c] == '0')
		c++;
	while (str[c] != '\0' && str[c] >= '0' && str[c] <= '9')
	{
		res = res * 10 + (str[c] - '0');
		c++;
	}
	if (n == 1)
		return (-res);
	return (res);
}

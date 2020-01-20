/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/13 14:03:47 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/20 15:24:48 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoafill(char *array, int n, int c, int neg)
{
	while ((c + neg) >= neg)
	{
		array[c + neg] = n % 10 + '0';
		n = n / 10;
		c--;
	}
	return (array);
}

static int	ft_itoacnt(int n)
{
	int c;

	c = 1;
	while (n > 9)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

static int	ft_memitoa(int n)
{
	int		i;

	i = 2;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*array;
	int		neg;
	int		c;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(array = malloc(sizeof(char) * ft_memitoa(n))))
		return (NULL);
	if (n < 0 && n > -2147483648)
	{
		n = n * -1;
		neg++;
	}
	if (n >= 0)
	{
		c = ft_itoacnt(n);
		array[c + neg] = '\0';
		c--;
		array = ft_itoafill(array, n, c, neg);
	}
	if (neg == 1)
		array[0] = '-';
	return (array);
}

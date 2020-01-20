/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substring_size.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/14 16:24:28 by lvan-vlo       #+#    #+#                */
/*   Updated: 2019/03/19 15:24:23 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_substring_size(const char *s, char c)
{
	size_t len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

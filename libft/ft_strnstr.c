/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 11:28:14 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/20 16:38:47 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hc;
	size_t	nc;
	char	*h;
	char	*n;

	h = (char*)haystack;
	n = (char*)needle;
	hc = 0;
	if (n[0] == '\0')
		return (&h[hc]);
	while (h[hc] != '\0' && hc < len)
	{
		nc = 0;
		while (h[hc + nc] == n[nc] && n[nc] != '\0' && \
			hc + nc < len)
		{
			nc++;
			if (n[nc] == '\0')
				return (&h[hc]);
		}
		hc++;
	}
	return (NULL);
}

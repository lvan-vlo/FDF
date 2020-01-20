/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <lvan-vlo@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/07 15:00:20 by lvan-vlo       #+#    #+#                */
/*   Updated: 2019/03/07 15:13:57 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(char const *s, int i, char c)
{
	size_t	j;

	j = 0;
	while (s[(size_t)i + j] != c && s[(size_t)i + j] != '\0')
		j++;
	return (j);
}

char			**ft_strpsplit(char const *s, char c)
{
	char			**array;
	int				i;
	int				a;

	if (!(array = malloc(sizeof(char*) * ft_wordcount(s, c) + 1)))
		return (NULL);
	i = 0;
	a = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			array[a] = ft_strsub(s, i, ft_wordlen(s, i, c));
		while (s[i] != c && s[i] != '\0')
			i++;
		a++;
	}
	array[a] = NULL;
	return (array);
}

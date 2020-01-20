/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 15:17:50 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/18 17:47:17 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;
	t_list *nxt;

	current = *alst;
	while (current)
	{
		nxt = current->next;
		del(current->content, current->content_size);
		free(current);
		current = nxt;
	}
	*alst = NULL;
}

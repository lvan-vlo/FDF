/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstiter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lvan-vlo <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/19 12:48:13 by lvan-vlo      #+#    #+#                 */
/*   Updated: 2019/01/19 12:53:26 by lvan-vlo      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *current;
	t_list *nxt;

	current = lst;
	while (current)
	{
		nxt = current->next;
		f(current);
		current = nxt;
	}
}

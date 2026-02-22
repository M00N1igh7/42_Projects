/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <chrrazaf@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:50:25 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/22 15:25:10 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (del)
	{
		while ((*lst))
		{
			(*del)((*lst)->content);
			tmp = (*lst);
			(*lst) = (*lst)->next;
			free(tmp);
		}
	}
	if (lst)
	{
		free((*lst));
		(*lst) = NULL;
	}
}

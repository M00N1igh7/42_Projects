/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 15:50:25 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/10 17:18:53 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while ((*lst))
	{
		(*del)((*lst)->content);
		tmp = (*lst);
		(*lst) = (*lst)->next;
		free(tmp);
	}
	free((*lst));
	(*lst) = NULL;
}

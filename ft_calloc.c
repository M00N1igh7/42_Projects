/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:33:19 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/12 12:36:01 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	i;

	i = 0;
	if (nmemb == 0 || size == 0)
		arr = malloc(0);
	else
	{
		arr = malloc(nmemb * size);
		if (!arr)
			return (NULL);
		while (i < size)
		{
			*((unsigned char *)(arr + i)) = 0;
			i++;
		}
	}
	return (arr);
}

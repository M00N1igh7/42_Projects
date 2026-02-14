/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 10:55:19 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/14 13:38:20 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;

	i = n;
	if (dest > src)
	{
		i = i - 1;
		while (i >= 0)
		{
			*((unsigned char *)(dest + i)) = *((unsigned char *)(src + i));
			i--;
		}
	}
	else
		return (ft_memcpy(dest, src, n));
	return (dest);
}

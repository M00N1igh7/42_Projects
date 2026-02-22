/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <chrrazaf@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:18:11 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/17 09:17:25 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*mem1;
	unsigned char	*mem2;

	mem1 = (unsigned char *)s1;
	mem2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (mem1[i] != mem2[i])
		{
			if ((mem1[i] - mem2[i]) < 0)
				return (-1);
			else
				return (1);
		}
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:00:49 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/12 16:33:57 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (*((unsigned char *)(s + i)) != (unsigned char)c && i < n)
		i++;
	if ((*(unsigned char *)(s + i)) == (unsigned char)c && i < n)
		return ((void *)(s + i));
	return (NULL);
}

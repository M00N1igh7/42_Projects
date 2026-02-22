/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <chrrazaf@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:00:49 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/17 09:17:09 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *((unsigned char *)(s + i)) != (unsigned char)c)
		i++;
	if (i < n && (*(unsigned char *)(s + i)) == (unsigned char)c)
		return ((void *)(s + i));
	return (NULL);
}

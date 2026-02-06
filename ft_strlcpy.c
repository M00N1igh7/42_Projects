/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 14:27:40 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/01/22 15:14:57 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
unsigned int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i < size - 1)
			dst[i] = src[i];
		else
			dst[i] = 0;
		i++;
	}
	return (i);
}

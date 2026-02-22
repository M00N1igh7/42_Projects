/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <chrrazaf@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:15:40 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/17 09:19:31 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	rslt;
	size_t	src_len;

	i = 0;
	d_len = 0;
	rslt = 0;
	src_len = 0;
	while (dst[d_len] != '\0')
		d_len++;
	while (src[src_len] != 0)
		src_len++;
	if (size > d_len)
		rslt = d_len + src_len;
	else
		rslt = size + src_len;
	while (src[i] != 0 && size > (d_len + 1))
	{
		dst[d_len++] = src[i];
		i++;
	}
	dst[d_len] = 0;
	return (rslt);
}

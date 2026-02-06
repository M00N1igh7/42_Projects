/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 15:15:40 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/01/27 11:58:30 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstlen;

	i = 0;
	dstlen = 0;
	while (dst[dstlen] != '\0')
		dstlen++;
	if (size >= dstlen + 2)
	{
		while (src[i] != '\0')
		{
			printf("%d\n", (dstlen + i));
			if (i < size - dstlen - 1)
				dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
	}
	return (dstlen + i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <chrrazaf@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:33:19 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/17 09:14:45 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;
	size_t	i;

	i = 0;
	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	if (nmemb == 0 || size == 0)
		arr = malloc(0);
	else
	{
		arr = malloc(nmemb * size);
		if (!arr)
			return (NULL);
		while (i < (size * nmemb))
		{
			*((unsigned char *)(arr + i)) = 0;
			i++;
		}
	}
	return (arr);
}

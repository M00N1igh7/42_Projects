/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:32:55 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/13 12:16:56 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		save;
	size_t		i;
	size_t		j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && (len < 0 || i < len))
	{
		j = 0;
		if (big[i] == little[j])
		{
			save = i;
			while (little[j] != '\0' && little[j] == big[i + j] && i + j < len)
				j++;
			if (little[j] == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (NULL);
}

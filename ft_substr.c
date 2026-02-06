/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:09:53 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/06 09:51:07 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned start, size_t len)
{
	char			*subs;
	unsigned int	i;

	i = 0;
	subs = (char *)malloc(len * sizeof(char));
	if (subs == 0)
		return (NULL);
	while (i < len)
	{
		subs[i] = s[i + start];
		i++;
	}
	return (subs);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <chrrazaf@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:54:30 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/17 09:19:09 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*sdup;
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	sdup = (char *)malloc((i + 1) * sizeof(char));
	if (!sdup)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		sdup[i] = s[i];
		i++;
	}
	sdup[i] = '\0';
	return (sdup);
}

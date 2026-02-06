/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:54:30 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/01/30 13:01:24 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*sdup;
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	sdup = (char *)malloc(i * sizeof(char));
	i = 0;
	while (s[i] != '\0')
	{
		sdup[i] = s[i];
		i++;
	}
	return (sdup);
}

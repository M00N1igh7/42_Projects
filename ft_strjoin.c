/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:21:18 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/14 14:06:40 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i[2];

	i[0] = ft_strlen(s1);
	i[1] = ft_strlen(s2);
	str = (char *)malloc((i[0] + i[1] + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i[0] = 0;
	i[1] = 0;
	while (s1[i[0]] != '\0')
	{
		str[i[0]] = s1[i[0]];
		i[0]++;
	}
	while (s2[i[1]] != '\0')
	{
		str[i[0] + i[1]] = s2[i[1]];
		i[1]++;
	}
	str[i[0] + i[1]] = '\0';
	return (str);
}

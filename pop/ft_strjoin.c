/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <chrrazaf@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:21:18 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/22 14:56:49 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlength(char const *str)
{
	int	i;

	i = 0;
	if (str)
		i = ft_strlen(str);
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i[2];

	i[0] = ft_strlength(s1);
	i[1] = ft_strlength(s2);
	if (!s1 || !s2)
		return (NULL);
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

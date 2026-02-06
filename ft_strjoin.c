/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:21:18 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/06 09:52:50 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		i[2];

	i[0] = 0;
	i[1] = 0;
	while (s1[i[0]] != '\0')
		i[0]++;
	while (s2[i[1]] != '\0')
		i[1]++;
	str = (char *)malloc((i[0] + i[1]) * sizeof(char));
	if (str == NULL )
		return (0);
	i[0] = -1;
	i[1] = -1;
	while (s1[++i[0]] != '\0')
		str[i[0]] = s1[i[0]];
	while (s2[++i[1]] != '\0')
		str[i[0] + i[1]] = s2[i[1]];
	return (str);
}

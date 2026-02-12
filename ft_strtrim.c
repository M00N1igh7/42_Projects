/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:29:33 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/06 10:12:40 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	verifyier(char const *s1, char const *set, int strt, int sign)
{
	int	in;
	int	i;
	int	j;

	in = 1;
	j = strt;
	while (in == 1)
	{
		in = 0;
		i = 0;
		while (set[i] != '\0')
		{
			if (set[i] == s1[j])
				in = 1;
			i++;
		}
		if (sign == 0 && in == 1)
			j++;
		if (sign == 1 && in == 1)
			j--;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = verifyier(s1, set, 0, 0);
	j = verifyier(s1, set, ft_strlen(s1) - 1, 1);
	return (ft_substr(s1, i, (++j) - i));
}

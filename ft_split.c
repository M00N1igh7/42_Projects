/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:13:57 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/10 11:49:28 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*add_wrd(char const *s, int *strt, char c)
{
	int		i;
	int		begin;
	char	*str;

	i = 0;
	while (s[*strt] == c)
		(*strt)++;
	begin = *strt;
	while (s[*strt] != c && s[*strt] != 0)
	{
		i++;
		(*strt)++;
	}
	str = (char *) malloc((i + 1) * sizeof(char));
	*(str + i) = '\0';
	i = 0;
	while (begin < *strt)
	{
		str[i] = s[begin];
		i++;
		begin++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i[2];
	int		strt;
	char	**str;

	i[0] = 0;
	i[1] = 0;
	while (s[i[1]] != '\0')
	{
		if (s[i[1]] != c && (s[i[1] - 1] == c || (i[1] - 1) == -1))
			i[0]++;
		i[1]++;
	}
	str = (char **) malloc((i[0] + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	strt = 0;
	i[1] = i[0];
	i[0] = 0;
	while (i[0] < i[1])
	{
		*(str + i[0]) = add_wrd(s, &strt, c);
		i[0]++;
	}
	return (str);
}

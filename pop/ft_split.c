/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <chrrazaf@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 10:13:57 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/22 15:04:25 by chrrazaf         ###   ########.fr       */
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
	if (!str)
		return (NULL);
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

static int	count_wrd(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			j++;
		i++;
	}
	return (j);
}

static char	**free_up(char **str, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free((*(str + i)));
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i[2];
	int		strt;
	char	**str;

	if (!s)
		return (NULL);
	i[0] = count_wrd(s, c);
	str = (char **) malloc((i[0] + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	strt = 0;
	i[1] = i[0];
	i[0] = 0;
	while (i[0] < i[1])
	{
		*(str + i[0]) = add_wrd(s, &strt, c);
		if (!(*(str + i[0])))
			return (free_up(str, i[0]));
		i[0]++;
	}
	if (!str)
		return (NULL);
	*(str + i[0]) = NULL;
	return (str);
}

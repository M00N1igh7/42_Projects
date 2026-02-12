/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:32:55 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/10 18:06:29 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_fill_tab(size_t *i)
{
	int	j;

	j = 0;
	while (j < 3)
	{
		i[j] = 0;
		j++;
	}
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i[3];
	unsigned char	*str1;
	unsigned char	*str2;

	ft_fill_tab(i);
	str1 = (unsigned char *)big;
	str2 = (unsigned char *)little;
	if (str2 == (unsigned char *)"")
		return (str1);
	while (str2[i[0]] != '\0')
		i[0]++;
	while ((str1[i[1]] != '\0') && i[1] < len)
	{
		if (str1[i[1]] == str2[i[2]])
		{
			i[2]++;
			if (i[2] == (i[0] - 1))
				return ((str1 + i[1] - i[2] + 1));
		}
		else
			i[2] = 0;
		i[1]++;
	}
	return (0);
}

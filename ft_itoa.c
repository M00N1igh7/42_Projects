/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:50:40 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/14 11:56:06 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*the_char(char *str, long n, int sign, int i)
{
	long	div;
	int		mod;

	div = n;
	if (!str)
		return (NULL);
	if (div == 0)
	{
		*(str + 1) = '\0';
		*str = '0';
	}
	str[i] = '\0';
	while (div > 0)
	{
		i--;
		mod = div % 10;
		str[i] = mod + '0';
		div /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	long	m;
	int		sign;
	int		i;
	long	div;
	char	*str;

	sign = (n < 0);
	m = (long)n;
	i = 0;
	if (sign)
		m *= (-1);
	div = m;
	if (!div)
		i++;
	while (div)
	{
		div /= 10;
		i++;
	}
	i += sign;
	str = (char *)malloc((i + 1) * sizeof(char));
	return (the_char(str, m, sign, i));
}

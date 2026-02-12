/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 11:50:40 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/10 12:58:18 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

char	*the_char(char *str, int n, int sign, int i)
{
	int	div;
	int	mod;

	i = i + 1;
	str[i] = '\0';
	mod = n % 10;
	div = n;
	while (div != 0)
	{
		i--;
		mod = div % 10;
		str[i] = mod + '0';
		div /= 10;
	}
	i--;
	if (sign)
		str[i] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		mod;
	int		div;
	int		sign;
	int		i;
	char	*str;

	i = 1;
	sign = (n < 0);
	if (sign)
		n = n * (-1);
	div = n / 10;
	while (div != 0)
	{
		div /= 10;
		i++;
	}
	str = malloc((i + sign + 1) * sizeof(char));
	if (n == -2147483648)
	{
		str = "-2147483647";
		return (str);
	}
	if (!str)
		return (NULL);
	return (the_char(str, n, sign, i));
}

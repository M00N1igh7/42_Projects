/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 22:42:22 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/21 00:05:50 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_putnbr(int n, unsigned int i)
{
	long	m;
	char	mod;

	m = (long)n;
	if (n < 0)
	{
		write(1, "-", 1);
		m = -m;
		i++;
	}
	mod = '0' + (m % 10);
	if (m >= 10)
	{
		i++;
		if ((m / 10) > 0)
			i = ft_putnbr((m / 10), i);
		write(1, &mod, 1);
		return (i);
	}
	write(1, &mod, 1);
	return (++i);
}

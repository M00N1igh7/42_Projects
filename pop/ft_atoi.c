/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <chrrazaf@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:45:21 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/22 14:49:42 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i[2];
	long	rslt;

	i[0] = 0;
	rslt = 0;
	i[1] = 0;
	while ((nptr[i[0]] >= 9 && nptr[i[0]] <= 13) || nptr[i[0]] == ' ')
		i[0]++;
	if (nptr[i[0]] == '+' || nptr[i[0]] == '-')
	{
		if (nptr[i[0]] == '-')
			i[1] = 1;
		i[0]++;
	}
	while (nptr[i[0]] >= '0' && nptr[i[0]] <= '9')
	{
		rslt = (rslt * 10) + nptr[i[0]] - '0';
		i[0]++;
	}
	if (i[1] == 1)
		rslt *= -1;
	return ((int)rslt);
}

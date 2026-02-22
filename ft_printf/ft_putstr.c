/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <chrrazaf@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:17:46 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/21 15:45:31 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(const char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 4));
	while (s[i] != 0)
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

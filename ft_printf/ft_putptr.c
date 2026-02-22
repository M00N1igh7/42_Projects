/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 17:39:04 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/21 15:40:25 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_hexptr(unsigned long n, int i)
{
    if (n)
    {
        i++;
        if ((n / 16))
            i = ft_hexlow((n / 16), i);
        write(1, &"0123456789abcdef"[(n % 16)], 1);
        return (i);
    }
    else
    {
        i++;
        write(1, "0", 1);
    }
    return (i);
}

int	ft_putptr(void *n)
{
	unsigned long	*x;
	int				i;

	i = 0;
	x = (unsigned long *)n;
	if (!n)
		return (write(1, "nil", 3));
	i += write(1, "0x", 2);
	i +=ft_hexptr((*x), 0);
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 06:20:23 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/21 16:25:37 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_bonus(char type, int flag)
{
	if ((type == 'd' || type == 'i') && (flag == 2 || flag == 3))
		return (ft_putchar('+'));
	if (type == 'x' && (flag == 1 || flag == 3))
		return (ft_putstr("0x"));
	if (type == 'X' && (flag == 1 || flag == 3))
		return (ft_putstr("0X"));
	return (0);
}

int	ft_numbers(va_list x, char type, int flag)
{
	int	n;	
	int	i;

	i = 0;
	n = 0;
	if (type == 'i' || type == 'd')
	{
		n = (int)va_arg(x, int);
		if (n >= 0)
			i = check_bonus(type, flag);
		i += ft_putnbr(n, i);
	}
    else if (type == 'x' || type == 'X')
    {
        i = check_bonus(type, flag);
        if (type == 'x')
            i += ft_hexlow((int) va_arg(x, int), i);
        if (type == 'X')
            i += ft_hexup((int) va_arg(x, int), i);
    }
	if (type == 'u')
		i = ft_sputnbr((int) va_arg(x, int), i);
	else
		return (ft_putchar('%') + ft_putchar(type));
	return (i);
}

int	ft_output(va_list x, char type, int flag)
{
	int	n;

	if (type == 'c')
		return (ft_putchar(((char)va_arg(x, int))));
	else if (type == 'p')
		return (ft_putptr(x));
	if (type == 's')
		return (ft_putstr((const char *)va_arg(x, const char *)));
	if (type == '%')
		return (ft_putchar('%'));
	else
		return (ft_numbers(x, type, flag));
	return (0);
}

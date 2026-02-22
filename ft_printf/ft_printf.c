/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 21:51:09 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/21 16:15:34 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Note : for the flag, # is 1 and + is 2, if both occur flag is three.
static char	the_type(const char *str, int *j, int *flag)
{
	int	i;

	i = 0;
	while (str
		&& (str[i] == '#' || str[i] == ' '
			|| str[i] == '+' || str[i] == '-') && str[i])
	{
		if (str[i] == '#' && (*flag) == 0)
			(*flag) = 1;
		else if (str[i] == '+' && (*flag) == 0)
			(*flag) = 2;
		else if (str[i] == '+' || str[i] == '#' && (*flag))
			(*flag) = 3;
		i++;
	}
	(*j) += i;
	return (str[i]);
}
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		j;
	int		rslt;
	int		flag;
	char	type;

	j = 0;
	rslt = 0;
	va_start(args, format);
	if (!format)
		return (-1);
	while (format[j] != '\0')
	{
		flag = 0;
		if (format[j] == '%')
		{
			rslt += ft_output(args, the_type((format + (++j)), &j, &flag), flag);
		}
		else
			rslt += ft_putchar(format[j]);
		j++;
	}
	va_end(args);
	return ((rslt));
}

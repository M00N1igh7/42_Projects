/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 21:51:21 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/21 15:34:12 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_hexlow(unsigned int n, int i);
int	ft_hexup(unsigned int n, int i);
int	ft_putnbr(int n, unsigned int i);
int	ft_printf(const char *format, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putptr(void *n);
int	ft_output(va_list x, char type, int flag);
int	ft_sputnbr(unsigned int n, unsigned int i);
#endif

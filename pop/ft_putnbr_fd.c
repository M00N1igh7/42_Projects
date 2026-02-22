/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <chrrazaf@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:20:01 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/17 10:29:49 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	mod;

	if (fd >= 0)
	{
		if (n == -2147483648)
			write(fd, "-2147483648", 11);
		else
		{
			if (n < 0)
			{
				write(fd, "-", 1);
				n *= (-1);
			}
			mod = (n % 10) + '0';
			if (n >= 10)
			{
				ft_putnbr_fd((n / 10), fd);
				write(fd, &mod, 1);
			}
			else
				write(fd, &mod, 1);
		}
	}
}

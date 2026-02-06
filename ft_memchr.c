/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:00:49 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/01/27 13:17:03 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (*((unsigned char *)(s + i)) != c && i < n)
		i++;
	if ((*(unsigned char *)(s + i)) == c)
		return ((void *)(s + i));
	return (0);
}

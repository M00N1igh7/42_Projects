/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:18:11 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/01/30 12:13:53 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_memcmp(const void *s1, const void s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((*((unsigned char *)(s1 + i)) == (*((unsigned char *)(s2 + i)))
	&& i <= n))
		i++;
	if (*((unsigned char *)(s1 + i)) < *((unsigned char *)(s2 + i)))
		return (-1);
	if (*((unsigned char *)(s1 + i)) > *((unsigned char *)(s2 + i)))
		return (1);
	return (0);
}

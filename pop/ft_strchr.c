/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <chrrazaf@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:17:57 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/17 09:19:02 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
		if (s[i] == (char)c)
			return ((char *)(s + i));
	}
	if (*s == '\0' && c == 0)
		return ((char *)s);
	return (NULL);
}

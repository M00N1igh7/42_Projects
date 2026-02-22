/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <chrrazaf@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 12:58:46 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/02/22 15:06:53 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*str;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
		i++;
	str = (char *) malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		if (f)
			str[i] = (*f)(i, s[i]);
		else
			str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

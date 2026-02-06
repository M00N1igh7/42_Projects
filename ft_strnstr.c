/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:32:55 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/01/27 14:45:05 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i[3];
	unsigned char	*str1;
	unsigned char	*str2;

	i[0] = 0;
	i[1] = 0;
	i[2] = 0;
	str1 = (unsigned char *)big;
	str2 = (unsigned char *)little;
	if (str2 == (unsigned char *)"")
		return (str1);
	while (str2[i[0]++] != '\0')
		;
	while ((str1[i[1]] != '\0') && i[1] < len)
	{
		if (str1[i[1]] == str2[i[2]])
		{
			i[2]++;
			if (i[2] == (i[0] - 1))
				return ((str1 + i[1] - i[2] + 1));
		}
		else
			i[2] = 0;
		i[1]++;
	}
	return (0);
}

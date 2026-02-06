/* ************:************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_*.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrazaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 10:28:53 by chrrazaf          #+#    #+#             */
/*   Updated: 2026/01/19 17:04:39 by chrrazaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == 1) || (ft_isdigit(c) == 1))
		return (1);
	return (0);
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

void	*ft_memset(void *s, int c, int n)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

void	ft_bzero(void *s, int n)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (str[i] != '\0' && i < n)
		str[i++] = 0;
}

#include <string.h>
#include <stdio.h>
 
#define  BUF_SIZE  20
 
int main(void)
{
   char buffer[BUF_SIZE + 1] = "aaaaaaaaaaaa";
   char *string;
	//char z = 0;
	printf("%d \n", ft_isalpha(98));
 
   ft_memset(buffer, 0, sizeof(buffer));
   string = (char *) ft_memset(buffer,'A', 10);
   printf("\nBuffer contents: %s\n", string);
   ft_memset(buffer+10,'B', 10);
   printf("\nBuffer contents: %s\n", buffer);
}

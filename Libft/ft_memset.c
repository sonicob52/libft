/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:22:58 by frgarci2          #+#    #+#             */
/*   Updated: 2023/10/10 15:19:40 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*str;
	unsigned char	lett;

	i = 0;
	str = (char *)b;
	lett = c;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int main() 
{
	char	b[] = "Manuel, bueno, pon algo más"; 
	char	c[] = "Manuel, bueno, pon algo más";
	int		s = 'Z';
	size_t	n = 9;
	
	printf("La funcion que yo he creado es: %s\n", ft_memset(b, s, n));
	printf("La función primitiva es: %s\n", memset(c, s, n));

	//recuerdas que tienes que corregir en caso de que len sea mayor que str.
}
*/

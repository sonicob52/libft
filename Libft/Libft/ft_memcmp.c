/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:28:07 by frgarci2          #+#    #+#             */
/*   Updated: 2023/09/26 13:38:52 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (0);
}
/*
int main() 
{
    char str1[] = "pepiTo";
    char str2[] = "pepito";
    size_t n = 5; // Número de bytes a comparar

    int result = memcmp(str1, str2, n);
	printf("result%d\n", result);
	printf("funcion original %d\n", memcmp(str1, str2, n));
	printf("mi funcion %d\n", ft_memcmp(str1, str2, n));
return (0);
}
*/

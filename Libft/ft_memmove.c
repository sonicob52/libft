/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:59:59 by frgarci2          #+#    #+#             */
/*   Updated: 2023/10/06 13:15:27 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		return (ft_memcpy (dst, src, len));
	while (len --)
		((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	return (dst);
}
/*
int main()
{
    char src[50] = "Hola, mundo!";
    char s1[50] = "Hola, mundo!";

    // Copia la cadena src en dst utilizando ft_memmove
   
   	ft_memmove(src+2, src, strlen(src) + 1);

    // Imprime el resultado
    printf("Cadena de destino: %s\n", src);
	memmove(s1+2, s1, 20);
	printf("Esto es lo que la función original me da de resultado: %s\n", s1);
    return 0;
}
*/

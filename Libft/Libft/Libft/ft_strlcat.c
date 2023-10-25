/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:56:02 by frgarci2          #+#    #+#             */
/*   Updated: 2023/10/05 16:55:56 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dsts;
	size_t	srcs;

	i = 0;
	dsts = ft_strlen(dst);
	srcs = ft_strlen(src);
	if (dstsize > dsts)
	{
		while (src[i] != '\0' && ((i + dsts) < (dstsize - 1)))
		{
			dst[i + dsts] = src[i];
			i++;
		}
		dst[i + dsts] = 0;
		return (dsts + srcs);
	}
	else
		return (dstsize + srcs);
}
/*
int main() 
{
    char destino[] = "Pool party";
    char origen[] = "Blue";
	size_t	n;

	n = 0;
	printf("%zu", ft_strlcat(destino, origen, n));
    // Usando strlcat para concatenar las cadenas
   // size_t longitud_destino = sizeof(destino);
    //size_t longitud_resultado = ft_strlcat(destino, origen, longitud_destino);
   //if (longitud_resultado >= longitud_destino) {
       // printf("La concatenación se truncó.\n");
   // } else {
       // printf("La cadena concatenada es: %s\n", destino);
    //}
    return 0;
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:18:57 by frgarci2          #+#    #+#             */
/*   Updated: 2023/10/06 13:11:53 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int main() {
    char source[] = "Hello, World!";
    char destination[] = "Helli, Wirld!";
    ft_memcpy(destination, source, strlen(source) + 1);

    // Imprimimos la cadena de origen y la cadena de destino
    printf("Cadena de origen: %s\n", source);
    printf("Cadena de destino: %s\n", destination);

    return 0;
}
*/

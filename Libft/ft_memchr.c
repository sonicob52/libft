/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 19:30:26 by frgarci2          #+#    #+#             */
/*   Updated: 2023/09/26 13:43:25 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = s;
	i = 0;
	while (i < n)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		i++;
		p++;
	}
	return (0);
}
/*
int main() {
    // Definimos una cadena de caracteres para buscar dentro de ella
    char str[] = "Hello, World!";

    // Carácter que queremos buscar
    char searchChar = 'W';

    // Llamamos a la función ft_memchr para buscar el carácter en la cadena
    void *result = ft_memchr(str, searchChar, strlen(str));
	void *original = memchr(str, searchChar, strlen(str));

  //Funcion original: %s\n, dfgkjdgn()
  //Mi funcion: %s\n, ft_dfjngkfdn();
    return 0;
}
*/

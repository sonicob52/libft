/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_ bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:50:46 by frgarci2          #+#    #+#             */
/*   Updated: 2023/09/27 16:33:50 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

/*
#include <string.h>
#include <stdio.h>

int main()
{
	char	b[42] = "Manuel, bueno, pon algo más";
	char	c[42] = "Manuel, bueno, pon algo más";
	size_t	n = 10;

	printf("La función que yo he creado es\n");
	printf("La funcion que yo\0 he creado es");
}
*/

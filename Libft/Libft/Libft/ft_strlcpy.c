/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:56:02 by frgarci2          #+#    #+#             */
/*   Updated: 2023/10/02 15:38:47 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = 0;
	if (dstsize == 0)
	{
		l = ft_strlen(src);
		return (l);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	return (l);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	size_t	 n;
	char src1[] = "lorem ipsum dolor sit amet";
	char dst1[] = "blue";
	
	n = 15;
	printf("función original es: %zu\n", strlcpy("blue", "lorem", 50));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:33:16 by frgarci2          #+#    #+#             */
/*   Updated: 2023/10/05 18:30:27 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	l;

	l = c;
	if (l >= 0 && l <= 126)
	{
		while (*s != '\0')
		{
			if (*s == l)
				return ((char *)s);
			else
				s++;
		}
		if (l == '\0')
			return ((char *)s);
		return (NULL);
	}
	else
		return (NULL);
}
/*
int main()
{
	char str[] = "hola";
	int l ='\0';

	printf("%s", ft_strchr(str, l));
}
*/

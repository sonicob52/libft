/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:03:14 by frgarci2          #+#    #+#             */
/*   Updated: 2023/09/26 19:00:50 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*strh;
	char	*strn;

	strh = (char *)haystack;
	strn = (char *)needle;
	i = 0;
	if (strn[0] == '\0')
		return (strh);
	while (strh[i] != '\0' && i < len)
	{
		j = 0;
		while (strh[i + j] == strn[j] && (i + j) < len)
		{
			if (strn[j + 1] == '\0')
				return (&strh[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	const char *haystack = "al Bamanolito Bar";
	const char *needle = " Bar";
   	size_t len = 42;
	printf("result%d\n", *needle);
	printf("mi funcion%s\n", ft_strnstr(haystack, needle, len));
	printf("original%s\n", strnstr(haystack, needle, len));
	return (0);
}
*/

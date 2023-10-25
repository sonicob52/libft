/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 18:18:25 by frgarci2          #+#    #+#             */
/*   Updated: 2023/10/05 19:16:02 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	t;

	len = ft_strlen(s);
	t = c;
	while (len >= 0)
	{
		if (s[len] == t)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}
/*
int main()
{
	char str[] = "lhola";
	int l = 'l';

	printf("%s", ft_strrchr(str, l));
}
*/

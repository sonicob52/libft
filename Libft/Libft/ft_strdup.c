/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:26:45 by frgarci2          #+#    #+#             */
/*   Updated: 2023/10/10 17:14:40 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*loc;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	loc = malloc((sizeof(char)) * (len + 1));
	if (loc == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		loc[i] = s1[i];
		i++;
	}
	loc[i] = '\0';
	return (loc);
}
/*
#include <stdio.h>
int main()
{
	printf("%s", ft_strdup("hola"));
	return 0;
}*/

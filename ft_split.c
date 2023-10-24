/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 12:14:51 by frgarci2          #+#    #+#             */
/*   Updated: 2023/10/24 12:10:06 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	srows;

	i = 0;
	srows = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			srows++;
		i++;
	}
	return (srows);
}	

static char	**ft_freeall(char **list)
{
	size_t	j;

	j = 0;
	while (list[j])
	{
		free(list[j]);
		j++;
	}
	free(list);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer;
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	buffer = ft_calloc((ft_wordcount(s, c) + 1), (sizeof(char **)));
	if (buffer == NULL)
		return (NULL);
	while (i < ft_wordcount(s, c) && s[j] != '\0')
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		buffer[i] = ft_substr(s, start, (j - start));
		if (buffer[i++] == 0)
			return (ft_freeall(buffer));
	}
	return (buffer);
}
/*
int	main()
{
	char		c;
	const char	*str;
	char	**res;

	
	c = ' ';
	str = "hello!";
	res = ft_split(str, c);
	printf("%s\n", res[0]);
	return (0);
}
*/

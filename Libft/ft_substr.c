/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:16:43 by frgarci2          #+#    #+#             */
/*   Updated: 2023/10/11 16:48:56 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		j;
	char	*sstr;
	size_t	slen;

	i = start;
	j = 0;
	slen = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if ((start + len) > slen)
		len = slen - start;
	if ((start) > slen)
		return (ft_strdup(""));
	sstr = malloc(sizeof(char) * (len + 1));
	if (sstr == NULL)
		return (NULL);
	while (s[i] != '\0' && (start + len) > i)
	{
		sstr[j] = s[i];
		j++;
		i++;
	}
	sstr[j] = '\0';
	return (sstr);
}

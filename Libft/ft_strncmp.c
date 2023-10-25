/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:57:58 by frgarci2          #+#    #+#             */
/*   Updated: 2023/10/05 20:23:06 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			j = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (j);
		}
		i++;
	}
	return (j);
}
/*
int main(void)
{
		char s1[] = "A";
		char s2[] = "a";
		unsigned int	n;

		n = 2;
		printf("%d\n", strncmp(&s1[0], &s2[0], n));
		printf("%d\n", ft_strncmp(&s1[0], &s2[0], n));
		return (0);
}
*/

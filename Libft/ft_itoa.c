/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:02:45 by frgarci2          #+#    #+#             */
/*   Updated: 2023/10/17 16:30:46 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_countn(int n)
{
	int		i;
	long	nb;

	i = 0;
	nb = n;
	if (nb < 0)
	{
		nb = nb * -1;
		i++;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	long			num;
	unsigned int	i;

	num = n;
	i = ft_countn(n);
	str = ft_calloc(sizeof(char), ft_countn(n) + 1);
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	if (num == 0)
		str[0] = '0';
	str[i] = '\0';
	while (num > 0)
	{
		str[i - 1] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	return (str);
}

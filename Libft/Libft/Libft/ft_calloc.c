/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frgarci2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:26:43 by frgarci2          #+#    #+#             */
/*   Updated: 2023/10/20 14:14:17 by frgarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*loc;
	size_t	result;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	result = count * size;
	loc = malloc(result);
	if (loc != NULL)
		ft_bzero(loc, result);
	return (loc);
}

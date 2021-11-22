/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <rteles@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:26:31 by rteles            #+#    #+#             */
/*   Updated: 2021/11/16 23:14:22 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*dest;

	i = 0;
	dest = (char *)str;
	while (i < n)
	{
		dest[i] = c;
		i++;
		str++;
	}
	return ((void *)dest);
}

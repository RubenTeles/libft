/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <rteles@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:48:49 by rteles            #+#    #+#             */
/*   Updated: 2021/12/23 18:05:45 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	int		a;
	char	*s1;
	char	*s2;

	i = 0;
	a = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	while (i < n)
	{
		a = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (a != 0)
			return (a);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <rteles@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:34:02 by rteles            #+#    #+#             */
/*   Updated: 2021/11/16 23:14:05 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	int				a;
	unsigned char	*string;

	i = 0;
	a = 0;
	string = (unsigned char *)str;
	while (i < n)
	{
		if (string[i] == (unsigned char)c)
		{
			string = &string[i];
			return ((void *)string);
		}
		i++;
	}
	return (0);
}

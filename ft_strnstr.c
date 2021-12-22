/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <rteles@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:18:05 by rteles            #+#    #+#             */
/*   Updated: 2021/12/22 17:26:05 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	a;
	size_t	len;

	i = 0;
	a = 0;
	len = ft_strlen(s2);
	if (len == 0)
		return ((char *)s1);
	while (i < n && s1[i])
	{
		a = 0;
		while (s1[i + a] == s2[a] && ((i + a) < n) && s2[a] && s1[i + a])
			a++;
		if (a == len)
			return ((char *)&s1[i]);
		i++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <rteles@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:30:20 by rteles            #+#    #+#             */
/*   Updated: 2021/11/16 23:15:17 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		len;

	i = 0;
	if (size < ft_strlen(dest))
		return (size + ft_strlen(src));
	else
	{
		while (dest[i])
			i++;
		ft_strlcpy(&dest[i], src, size - i);
		len = ft_strlen(src) + i;
		return (len);
	}
}

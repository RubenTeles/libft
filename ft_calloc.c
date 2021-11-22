/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <rteles@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:38:45 by rteles            #+#    #+#             */
/*   Updated: 2021/11/16 23:13:14 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (void *)malloc(num * size);
	if (str == 0)
		return (0);
	while (i < num * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

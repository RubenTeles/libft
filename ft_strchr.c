/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <rteles@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:37:18 by rteles            #+#    #+#             */
/*   Updated: 2021/11/16 23:14:58 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	int		i;
	char	*rtstr;

	i = 0;
	rtstr = (char *)string;
	while (rtstr[i])
	{
		if (rtstr[i] == (unsigned char)c)
			return (&rtstr[i]);
		i++;
	}
	if (rtstr[i] == c)
		return (&rtstr[i]);
	return (0);
}

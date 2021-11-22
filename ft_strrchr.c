/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <rteles@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:51:39 by rteles            #+#    #+#             */
/*   Updated: 2021/11/16 23:15:45 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int		i;
	char	*rstr;

	i = 0;
	while (string[i])
		i++;
	rstr = (char *)string;
	while (i >= 0)
	{
		if (rstr[i] == (unsigned char)c)
			return (&rstr[i]);
		i--;
	}
	return (0);
}

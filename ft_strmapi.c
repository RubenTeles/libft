/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <rteles@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 19:28:57 by rteles            #+#    #+#             */
/*   Updated: 2021/11/16 23:15:30 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	i = 0;
	if (s == NULL)
		return (0);
	while (s[len])
		len++;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	str[len] = '\0';
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

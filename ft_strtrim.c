/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rteles <rteles@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:47:02 by rteles            #+#    #+#             */
/*   Updated: 2021/12/22 22:21:00 by rteles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(char const *s1, char const *set, int i, int *len)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (s1[i])
	{
		b = 0;
		a = 0;
		while (set[a])
		{
			if (s1[i] == set[a])
			{
				*len += 1;
				b = 1;
			}
			a++;
		}
		if (b == 0)
			break ;
		i++;
	}
	return (i);
}

static int	ft_end(char const *s1, char const *set, int i, int *len)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (s1[i])
	{
		b = 0;
		a = 0;
		while (set[a])
		{
			if (s1[i] == set[a])
			{
				*len += 1;
				b = 1;
			}
			a++;
		}
		if (b == 0)
			break ;
		i--;
	}
	if (b == (int)ft_strlen(s1))
		return (0);
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		len;

	if (s1 == NULL || set == NULL)
		return (0);
	len = 0;
	start = ft_start(s1, set, 0, &len);
	ft_end(s1, set, ft_strlen(s1) - 1, &len);
	if (len >= (int)ft_strlen(s1))
		len = 0;
	else
		len = ft_strlen(s1) - len;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	ft_strlcpy(&str[0], &s1[start], len + 1);
	return (str);
}

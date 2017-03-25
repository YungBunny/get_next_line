/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:30:39 by cfu               #+#    #+#             */
/*   Updated: 2016/12/23 04:07:13 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *)s;
	i = 0;
	if (c == '\0')
	{
		while (*str)
			str++;
		return (str);
	}
	if (str && c)
	{
		while (str[i])
		{
			if (str[i] == c)
			{
				str = &str[i];
				return (str);
			}
			i++;
		}
	}
	return (NULL);
}

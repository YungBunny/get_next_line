/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 02:18:05 by cfu               #+#    #+#             */
/*   Updated: 2016/12/18 04:12:44 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char *d;
	char *s;
	char *a;

	d = dst;
	s = (char *)src;
	while (*d && size)
	{
		d++;
		size--;
	}
	if (size == 0)
		return ((d - dst) + ft_strlen(src));
	a = d;
	while (*s)
	{
		if (size != 1)
		{
			*d++ = *s;
			size--;
		}
		s++;
	}
	*d = '\0';
	return ((a - dst) + (s - src));
}

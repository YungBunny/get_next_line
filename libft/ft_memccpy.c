/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 22:20:55 by cfu               #+#    #+#             */
/*   Updated: 2016/12/18 02:48:56 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	c2;
	size_t			i;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*s == c2)
		{
			*d = *s;
			return (d + 1);
		}
		else
		{
			*d = *s;
			d++;
			s++;
			i++;
		}
	}
	return (NULL);
}

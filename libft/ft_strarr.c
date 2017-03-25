/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 21:42:44 by cfu               #+#    #+#             */
/*   Updated: 2016/12/18 02:41:46 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strarr(char const *src, char c, size_t *n, size_t i)
{
	size_t	y;
	char	*res;

	y = 0;
	res = (char *)ft_memalloc(i);
	if (ft_strlen(src) == 0)
		return ((char *)src);
	while (src[*n] == c)
		*n += 1;
	while (src[*n] != c && y < i)
	{
		res[y] = src[*n];
		y++;
		*n += 1;
	}
	res[y] = '\0';
	return (res);
}

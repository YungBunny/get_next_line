/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ifnotfound.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/16 21:56:34 by cfu               #+#    #+#             */
/*   Updated: 2016/12/20 22:57:18 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ifnotfound(char const *s, char c, size_t *n)
{
	size_t res;
	size_t tmp;

	res = 0;
	tmp = *n;
	while (s[tmp] == c)
	{
		tmp++;
		if (s[tmp] == '\0')
		{
			res = 1;
			return (res);
		}
		else
			return (res);
	}
	return (res);
}

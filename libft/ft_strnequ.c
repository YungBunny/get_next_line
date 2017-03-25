/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 20:59:09 by cfu               #+#    #+#             */
/*   Updated: 2016/12/23 17:24:17 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 1;
	if (n == 0)
		return (1);
	if (!s1 || !s2)
		return (0);
	while (i < (int)n)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			i++;
		}
		else
			return (0);
	}
	return (*s1 == *s2);
}
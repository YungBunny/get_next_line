/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 19:51:03 by cfu               #+#    #+#             */
/*   Updated: 2016/12/23 01:30:11 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_numc(char const *s, char c, size_t *nn)
{
	size_t count;

	count = 0;
	while (s[*nn] == c)
		*nn += 1;
	if (s[*nn] != c && s[*nn])
	{
		while (s[*nn] != c)
		{
			count++;
			*nn += 1;
			if (s[*nn] == '\0')
				return (count);
		}
	}
	return (count);
}

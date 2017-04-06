/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 22:26:22 by cfu               #+#    #+#             */
/*   Updated: 2017/03/23 22:26:43 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t nbr)
{
	char	*s2;
	char	*p;

	s2 = ft_strnew(nbr);
	p = s2;
	if (!s2)
		return (NULL);
	if (s1 == 0)
		return (0);
	while (nbr > 0)
	{
		*s2 = *s1;
		s2++;
		s1++;
		nbr--;
	}
	*s2 = '\0';
	return (p);
}

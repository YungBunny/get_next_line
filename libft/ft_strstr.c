/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 19:07:08 by cfu               #+#    #+#             */
/*   Updated: 2016/12/23 17:24:22 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*p;
	size_t	i;

	p = (char *)big;
	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (i < ft_strlen(big))
	{
		if (ft_strncmp(&big[i], little, ft_strlen(little)) == 0)
			return (p = (char *)&big[i]);
		i++;
	}
	return (NULL);
}

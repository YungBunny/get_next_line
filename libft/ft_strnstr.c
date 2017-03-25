/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:52:54 by cfu               #+#    #+#             */
/*   Updated: 2016/12/23 16:20:01 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*p;
	size_t	i;

	p = (char *)big;
	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] != 0 && (ft_strlen(little) + i) <= len)
	{
		if (ft_strncmp(&big[i], little, ft_strlen(little)) == 0)
			return (p = (char *)&big[i]);
		i++;
	}
	return (NULL);
}

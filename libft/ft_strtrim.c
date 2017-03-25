/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 16:31:40 by cfu               #+#    #+#             */
/*   Updated: 2016/12/23 17:24:14 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	n;
	size_t	j;
	char	*str;

	i = 0;
	str = ft_strnew(0);
	if (!str || !s)
		return (NULL);
	n = ft_strtrimb(s);
	j = ft_strtrime(s);
	if (n == ft_strlen(s) || ft_strlen(s) == 0)
		return (str = ft_strdup(""));
	if (n < ft_strlen(s) && j)
	{
		str = ft_strnew(j - n + 1);
		while (n <= j)
			str[i++] = s[n++];
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}

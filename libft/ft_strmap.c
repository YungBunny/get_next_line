/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:11:51 by cfu               #+#    #+#             */
/*   Updated: 2016/12/23 16:27:11 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s1;
	size_t	len;
	char	*str;
	size_t	i;

	if (!f || !s)
		return (NULL);
	s1 = (char *)s;
	len = ft_strlen(s1);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	i = 0;
	if (s && f)
	{
		while (i < len && s1[i])
		{
			str[i] = f(s1[i]);
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}

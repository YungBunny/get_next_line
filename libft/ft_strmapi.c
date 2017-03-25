/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 19:31:48 by cfu               #+#    #+#             */
/*   Updated: 2016/12/23 16:45:33 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s1;
	size_t			len;
	char			*str;

	if (!f || !s)
		return (NULL);
	i = 0;
	s1 = (char *)s;
	len = ft_strlen(s);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	if (s1 && f)
	{
		while (i < len)
		{
			str[i] = f(i, s1[i]);
			i++;
		}
	}
	return (str);
}

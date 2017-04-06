/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 23:23:57 by cfu               #+#    #+#             */
/*   Updated: 2017/03/05 01:01:43 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_search_str(char *str, char c)
{
	int		i;

	i = 0;
	if (c == '\0')
		return (i = ft_strlen(str));
	if (str && c)
	{
		while (str[i])
		{
			if (str[i] == c)
				return (i);
			else
				i++;
		}
	}
	return (-1);
}

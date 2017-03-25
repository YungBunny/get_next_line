/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 01:08:15 by cfu               #+#    #+#             */
/*   Updated: 2016/12/23 17:20:49 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	char		**ss;
	size_t		i;
	size_t		n;
	size_t		nn;
	size_t		size;

	ss = (char **)malloc(sizeof(char *) * 0);
	i = 0;
	n = 0;
	nn = 0;
	size = 0;
	if (!ss || !s || !c)
		return (NULL);
	if (ft_strlen(s) == 0 || ft_ifnotfound(s, c, &n) == 1)
		return (ss = (char **)ft_strdup(""));
	if (ft_numr(s, c) > 0)
		ss = (char **)malloc(sizeof(char *) * ft_numr(s, c) + 1);
	while (s[n] && i < ft_numr(s, c))
	{
		size = ft_numc(s, c, &nn);
		ss[i] = ft_strarr(s, c, &n, size);
		i++;
	}
	ss[i] = NULL;
	return (ss);
}

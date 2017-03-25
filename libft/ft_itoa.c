/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 21:07:18 by cfu               #+#    #+#             */
/*   Updated: 2016/12/18 02:43:29 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	count;
	long	i;
	char	*str;

	count = ft_numlen(n);
	i = (long)n;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (!(str = ft_strnew(count)))
		return (NULL);
	str[count] = '\0';
	if (n < 0)
		n = n * -1;
	while (n)
	{
		str[--count] = n % 10 + '0';
		n /= 10;
	}
	if (i < 0)
		str[--count] = '-';
	return (str);
}

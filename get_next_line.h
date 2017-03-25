/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 16:36:05 by cfu               #+#    #+#             */
/*   Updated: 2017/03/24 00:39:36 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUF_SIZE 32
# include "libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct		s_line
{
	char			*data;
	char			buf[BUF_SIZE + 1];
	char			*found_it;
	char			*last;
}					t_line;

int		get_next_line(const int fd, char **line);

#endif

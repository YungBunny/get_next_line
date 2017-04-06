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
# define BUFF_SIZE 32
# include "libft/libft.h"
# include <fcntl.h>
# include <stdlib.h>

typedef struct	s_line
{
	char			*data;
	char			buf[BUFF_SIZE + 1];
	char			*found_it;
}				t_line;

int				get_next_line(const int fd, char **line);
int				read_that(char **data, char *buf, int fd);

#endif

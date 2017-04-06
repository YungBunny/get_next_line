/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfu <cfu@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 20:41:02 by cfu               #+#    #+#             */
/*   Updated: 2017/03/24 21:28:12 by cfu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	static t_line	gnl[1024];

	if (fd < 0 || line == NULL)
		return (-1);
	if (read_that(&gnl[fd].data, gnl[fd].buf, fd) == -1)
		return (-1);
	if (ft_search_str(gnl[fd].data, '\n') >= 0)
	{
		*line = ft_strndup(gnl[fd].data, ft_search_str(gnl[fd].data, '\n'));
		gnl[fd].found_it = ft_strsub(gnl[fd].data, ft_search_str(gnl[fd].data,
					'\n') + 1, ft_strlen(gnl[fd].data) -
				ft_search_str(gnl[fd].data, '\n') - 1);
		ft_strdel(&gnl[fd].data);
		gnl[fd].data = gnl[fd].found_it;
		return (1);
	}
	else
	{
		*line = ft_strdup(gnl[fd].data);
		gnl[fd].found_it = ft_strnew(0);
	}
	ft_strdel(&gnl[fd].data);
	gnl[fd].data = gnl[fd].found_it;
	return ((!ft_strlen(gnl[fd].data) && !ft_strlen(*line)) ? 0 : 1);
}

int		read_that(char **data, char *buf, int fd)
{
	int		ret;

	ret = 0;
	if (!*data)
		*data = (char *)ft_memalloc(1);
	while (ft_strchr(*data, '\n') == 0)
	{
		if ((ret = read(fd, buf, BUFF_SIZE)) == -1)
			return (-1);
		if (ret == 0)
			break ;
		buf[ret] = '\0';
		*data = ft_strjoin(*data, buf);
	}
	return (0);
}

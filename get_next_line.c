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
	int				ret;

	if (fd < 0 || line == NULL)
		return (-1);
	if (!gnl->data)
		gnl->data = (char *)ft_memalloc(1);
	while (ft_strchr(gnl->data, '\n') == 0)
	{
		if ((ret = read(fd, gnl->buf, BUFF_SIZE)) == -1)
			return (-1);
		if (ret == 0)
			break ;
		gnl->buf[ret] = '\0';
		gnl->data = ft_strjoin(gnl->data, gnl->buf);
	}
	if (ft_search_str(gnl->data, '\n') >= 0)
	{
		*line = ft_strndup(gnl->data, ft_search_str(gnl->data, '\n'));
		gnl->found_it = ft_strsub(gnl->data, ft_search_str(gnl->data, '\n') +
			   	1, ft_strlen(gnl->data) - ft_search_str(gnl->data, '\n') - 1);
		free(gnl->data);
		gnl->data = gnl->found_it;
		return (1);
	}
	else
	{
		*line = ft_strdup(gnl->data);
		gnl->found_it = ft_strnew(0);
	}
	free(gnl->data);
	gnl->data = gnl->found_it;
	return ((!ret && !ft_strlen(gnl->data) && !ft_strlen(*line)) ? 0 : 1);
}

/*int		main(int ac, char **av)
{
	char		*line;
	int			fd;
	
	line = NULL;
	if (ac > 1)
	{
			fd = open(av[1], O_RDONLY);
			int ret;
			while ((ret = get_next_line(fd, &line)) > 0)
				printf("%d: %s\n", ret, line);
			printf("%d\n", ret);
	}
	return (0);
}*/

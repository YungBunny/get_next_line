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
	while (ft_strchr(gnl->buf, '\n') == 0)
	{
		if ((ret = read(fd, gnl->buf, BUF_SIZE)) == -1)
			return (-1);
		gnl->data = ft_strjoin(gnl->data, gnl->buf);
		ft_bzero(gnl->buf, BUF_SIZE + 1);
		if (ret == 0)
			break;
	}
	gnl->found_it = ft_strchr(gnl->data, '\n') + 1;
	*line = ft_strndup(gnl->data, ft_search_str(gnl->data, '\n'));
	gnl->data = gnl->found_it;
	if ((ret != 0 && *gnl->data != '\0') || (ft_strchr(gnl->data, '\n')))
		return (1);
	else
		return (0);
}

/*int		main(int ac, char **av)
{
	char		*line;
	int			fd;
	
	line = NULL;
	//fd = open(av[1], O_RDONLY);
	if (ac > 1)
	{
		printf("%i\n%s\n", get_next_line(-99, NULL), line);
		printf("%i\n%s\n", get_next_line(-1, NULL), line);
		printf("%i\n%s\n", get_next_line(-10000, NULL), line);
		printf("%i\n%s\n", get_next_line(1, NULL), line);
		printf("%i\n%s\n", get_next_line(99, NULL), line);	
		printf("%i\n%s\n", get_next_line(-99, &line), line);
		printf("%i\n%s\n", get_next_line(-1, &line), line);
		printf("%i\n%s\n", get_next_line(-10000, &line), line);
		printf("%i\n%s\n", get_next_line(42, &line), line);
	}
	return (0);
}*/

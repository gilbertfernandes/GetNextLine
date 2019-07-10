/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 09:22:42 by gfernand          #+#    #+#             */
/*   Updated: 2019/07/10 16:14:03 by gfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_line(char *fd_arr, char **line)
{
	char	*temp;
	int		i;

	i = 0;
	while (fd_arr[i] != '\n' && fd_arr[i] != '\0')
		i++;
	*line = ft_strsub(fd_arr, 0, i);
	if (fd_arr[i] == '\0')
	{
		temp = NULL;
		ft_strdel(&fd_arr);
	}
	else
	{
		temp = ft_strsub(fd_arr, i + 1, ft_strlen(fd_arr + i) + 1);
		ft_strdel(&fd_arr);
	}
	return (temp);
}

int			get_next_line(const int fd, char **line)
{
	char			buff[BUFF_SIZE + 1];
	static char		*fd_arr[1025];
	int				ret;
	char			*temp;

	if (fd < 0 || (ret = read(fd, buff, 0) < 0) || !line)
		return (-1);
	if (!fd_arr[fd])
		fd_arr[fd] = ft_strnew(0);
	while (!ft_strchr(fd_arr[fd], '\n') &&
			(ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		temp = ft_strjoin(fd_arr[fd], buff);
		ft_strdel(&fd_arr[fd]);
		fd_arr[fd] = ft_strdupdel(&temp);
	}
	if (ret < BUFF_SIZE && !ft_strlen(fd_arr[fd]))
		return (0);
	fd_arr[fd] = ft_line(fd_arr[fd], line);
	return (1);
}

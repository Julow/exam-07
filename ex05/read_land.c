/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_land.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 12:38:24 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 13:08:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "land.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

static void		check_endl(t_land *land)
{
	char			*tmp;

	if (land->land[land->land_len-1] != '\n')
	{
		tmp = (char*)malloc(land->land_len + 1);
		ft_memcpy(tmp, land->land, land->land_len);
		tmp[land->land_len] = '\n';
		free(land->land);
		land->land = tmp;
		land->land_len++;
	}
}

int				read_land(t_land *land, char const *file)
{
	char			buff[BUFF_SIZE];
	int				len;
	int				fd;
	char			*tmp;

	if ((fd = open(file, O_RDONLY)) < 0)
		return (0);
	land->land = NULL;
	land->land_len = 0;
	while (1)
	{
		if ((len = read(fd, buff, BUFF_SIZE)) < 0)
			return (0);
		if (len == 0)
			break ;
		if ((tmp = (char*)malloc(land->land_len + len)) == NULL)
			return (0);
		if (land->land != NULL)
		{
			ft_memcpy(tmp, land->land, land->land_len);
			free(land->land);
		}
		ft_memcpy(tmp + land->land_len, buff, len);
		land->land_len += len;
		land->land = tmp;
	}
	if (land->land_len <= 0)
		return (0);
	check_endl(land);
	return (1);
}

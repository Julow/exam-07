/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_land.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 12:45:57 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 13:06:32 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "land.h"

int				check_land(t_land *land)
{
	int				line_len;
	int				i;

	line_len = 0;
	land->height = -1;
	land->lines = 0;
	i = -1;
	while (++i < land->land_len)
	{
		if (land->land[i] == '\n')
		{
			if (land->height == -1)
				land->height = line_len;
			else if (line_len != land->height)
				return (0);
			line_len = 0;
			land->lines++;
		}
		else
			line_len++;
		if (land->land[i] != '\n' && land->land[i] != '.' && land->land[i] != 'X')
			return (0);
	}
	land->height++;
	return (1);
}

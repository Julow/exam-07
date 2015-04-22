/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_land.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 12:57:35 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 13:04:53 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "land.h"

static void		track_land(t_land *land, int pos, char c)
{
	if (land->land[pos] != 'X')
		return ;
	land->land[pos] = c;
	if (pos > land->height)
		track_land(land, pos - land->height, c);
	if (pos % land->height > 0)
		track_land(land, pos - 1, c);
	if (pos % land->height < (land->height - 1))
		track_land(land, pos + 1, c);
	if ((pos + land->height) < land->land_len)
		track_land(land, pos + land->height, c);
}

void			count_land(t_land *land)
{
	int				i;
	char			c;

	i = -1;
	c = '0';
	while (++i < land->land_len)
		if (land->land[i] == 'X')
			track_land(land, i, c++);
}

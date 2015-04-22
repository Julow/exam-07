/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   land.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 12:34:34 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 12:58:09 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAND_H
# define LAND_H

typedef struct	s_land
{
	char			*land;
	int				land_len;
	int				lines;
	int				height;
}				t_land;

# define BUFF_SIZE			512

int				read_land(t_land *land, char const *file);
int				check_land(t_land *land);
void			count_land(t_land *land);

void			ft_memcpy(char *dst, char *src, int len);
#endif

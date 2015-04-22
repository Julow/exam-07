/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 12:54:34 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 13:05:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "land.h"
#include <unistd.h>

int				main(int argc, char **argv)
{
	t_land			land;

	if (argc > 1 && read_land(&land, argv[1]) && check_land(&land))
	{
		count_land(&land);
		write(1, land.land, land.land_len);
	}
	else
		write(1, "\n", 1);
	return (0);
}

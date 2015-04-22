/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 10:50:59 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 12:35:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "g_diam.h"
#include <unistd.h>

static void		g_diam(char const *str, int count)
{
	t_node			nodes[count];
	int				i;
	int				max;

	if ((count = parse_nodes(str, nodes, count)) < 0)
		return ;
	i = -1;
	max = 0;
	while (++i < count)
	{
		nodes[i].flags = FLAG_BY_A;
		max = ft_max(track_nodes(nodes, count, nodes[i].a), max);
		nodes[i].flags = FLAG_BY_B;
		max = ft_max(track_nodes(nodes, count, nodes[i].b), max);
		nodes[i].flags = 0;
	}
	ft_putnbr(max);
}

int				main(int argc, char **argv)
{
	int				count;

	if (argc == 2)
	{
		count = ft_countword(argv[1]);
		g_diam(argv[1], count);
	}
	write(1, "\n", 1);
	return (0);
}

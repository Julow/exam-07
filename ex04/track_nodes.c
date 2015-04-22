/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   track_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 10:55:20 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 12:32:37 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "g_diam.h"

static void		set_flags_by(t_node *nodes, int count, int curr)
{
	int				i;

	i = -1;
	while (++i < count)
	{
		if (nodes[i].a == curr)
			nodes[i].flags |= FLAG_BY_A;
		if (nodes[i].b == curr)
			nodes[i].flags |= FLAG_BY_B;
	}
}

static void		unset_flags_by(t_node *nodes, int count, int curr)
{
	int				i;

	i = -1;
	while (++i < count)
	{
		if (nodes[i].flags == 0)
			continue ;
		if (nodes[i].a == curr)
			nodes[i].flags &= ~FLAG_BY_A;
		if (nodes[i].b == curr)
			nodes[i].flags &= ~FLAG_BY_B;
	}
}

int				track_nodes(t_node *nodes, int count, int curr)
{
	int				i;
	int				max;

	set_flags_by(nodes, count, curr);
	i = -1;
	max = 1;
	while (++i < count)
	{
		if (nodes[i].a == curr && !(nodes[i].flags != FLAG_BY_A))
			max = ft_max(max, track_nodes(nodes, count, nodes[i].b) + 1);
		if (nodes[i].b == curr && !(nodes[i].flags != FLAG_BY_B))
			max = ft_max(max, track_nodes(nodes, count, nodes[i].a) + 1);
	}
	unset_flags_by(nodes, count, curr);
	return (max);
}

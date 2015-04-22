/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_nodes.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 10:50:21 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 12:26:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "g_diam.h"

int				parse_nodes(char const *str, t_node *nodes, int n)
{
	int				count;
	int				tmp;

	count = 0;
	while (count < n)
	{
		while (ft_isspace(*str))
			str++;
		tmp = ft_atoub(str, (unsigned int*)&(nodes[count].a));
		str += tmp;
		if (tmp < 1 || *str != '-')
			return (-1);
		str++;
		tmp = ft_atoub(str, (unsigned int*)&(nodes[count].b));
		str += tmp;
		if (tmp < 1)
			return (-1);
		nodes[count].flags = 0;
		count++;
	}
	return (count);
}

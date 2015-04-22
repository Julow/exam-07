/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subssort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 10:16:37 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 10:43:55 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord.h"

void			ft_subssort(t_sub *subs, int len, int (*cmp)(t_sub*, t_sub*))
{
	int				i;
	int				j;
	int				min;
	t_sub			tmp;

	i = -1;
	while (++i < len)
	{
		j = i;
		min = i;
		while (++j < len)
			if (cmp(subs + min, subs + j) > 0)
				min = j;
		if (min != i)
		{
			tmp = subs[min];
			subs[min] = subs[i];
			subs[i] = tmp;
		}
	}
}

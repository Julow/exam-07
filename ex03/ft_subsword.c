/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subsword.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 10:02:44 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 10:07:23 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord.h"

int				ft_subsword(char *str, t_sub *subs, int n)
{
	int				count;
	int				len;

	count = 0;
	while (ft_isspace(*str))
		str++;
	while (count < n && *str != '\0')
	{
		len = 0;
		while (!ft_isspace(str[len]) && str[len] != '\0')
			len++;
		subs[count++] = SUB(str, len);
		str += len;
		while (ft_isspace(*str))
			str++;
	}
	return (count);
}

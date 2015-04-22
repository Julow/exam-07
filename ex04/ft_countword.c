/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 09:59:40 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 10:49:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "g_diam.h"

int				ft_countword(char const *str)
{
	int				count;

	while (ft_isspace(*str))
		str++;
	count = 0;
	while (*str != '\0')
	{
		count++;
		while (!ft_isspace(*str) && *str != '\0')
			str++;
		while (ft_isspace(*str))
			str++;
	}
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 11:19:07 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 11:21:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "g_diam.h"

int				ft_atoub(char const *str, unsigned int *b)
{
	int				i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	*b = 0;
	while (ft_isdigit(str[i]))
	{
		*b *= 10;
		*b += str[i] - '0';
		i++;
	}
	return (i);
}

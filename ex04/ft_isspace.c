/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 09:58:32 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 11:16:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "g_diam.h"

int				ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\n'
			|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

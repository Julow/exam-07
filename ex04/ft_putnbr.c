/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 11:01:01 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 11:16:47 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "g_diam.h"
#include <unistd.h>

void			ft_putnbr(int nbr)
{
	char			buff[10];
	int				i;

	i = 10;
	if (nbr < 0)
		buff[0] = '-';
	else if (nbr == 0)
		buff[--i] = '0';
	while (nbr != 0)
	{
		if (nbr < 0)
			buff[--i] = (nbr % -10) + '0';
		else
			buff[--i] = (nbr % 10) + '0';
		nbr /= 10;
	}
	write(1, buff + i, 10 - i);
}

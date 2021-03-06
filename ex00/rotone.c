/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 09:32:04 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 09:37:44 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			main(int argc, char **argv)
{
	int			i;

	if (argc == 2 && argv[1][0] != '\0')
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] >= 'a' && argv[1][i] < 'z')
				|| (argv[1][i] >= 'A' && argv[1][i] < 'Z'))
				argv[1][i]++;
			else if (argv[1][i] == 'z')
				argv[1][i] = 'a';
			else if (argv[1][i] == 'Z')
				argv[1][i] = 'A';
			i++;
		}
		write(1, argv[1], i);
	}
	write(1, "\n", 1);
	return (0);
}

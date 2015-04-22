/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 09:46:20 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 09:55:40 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int		ft_strinchr(char const *str, char c, int n)
{
	while (n-- > 0)
	{
		if (str[n] == c)
			return (n);
	}
	return (-1);
}

int				main(int argc, char **argv)
{
	int				s1_i;
	int				s2_i;

	if (argc == 3)
	{
		s1_i = -1;
		while (argv[1][++s1_i] != '\0')
			if (ft_strinchr(argv[1], argv[1][s1_i], s1_i) == -1)
				write(1, argv[1] + s1_i, 1);
		s2_i = -1;
		while (argv[2][++s2_i] != '\0')
			if (ft_strinchr(argv[1], argv[2][s2_i], s1_i) == -1
				&& ft_strinchr(argv[2], argv[2][s2_i], s2_i) == -1)
				write(1, argv[2] + s2_i, 1);
	}
	write(1, "\n", 1);
	return (0);
}

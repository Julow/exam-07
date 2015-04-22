/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 10:07:29 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 10:41:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ord.h"
#include <unistd.h>

static void		ord_print(t_sub *words, int w_count)
{
	int				i;
	int				last_len;

	i = 0;
	last_len = words[0].length;
	write(1, words[0].str, last_len);
	while (++i < w_count)
	{
		if (words[i].length == last_len)
			write(1, " ", 1);
		else
		{
			last_len = words[i].length;
			write(1, "\n", 1);
		}
		write(1, words[i].str, words[i].length);
	}
}

static int		alphlong_cmp(t_sub *s1, t_sub *s2)
{
	int				i;
	char			c1;
	char			c2;

	if (s1->length != s2->length)
		return (s1->length - s2->length);
	i = 0;
	while (i < s1->length)
	{
		c1 = LOWER(s1->str[i]);
		c2 = LOWER(s2->str[i]);
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}

static void		ord_alphlong(char *str, int w_count)
{
	t_sub			words[w_count];

	w_count = ft_subsword(str, words, w_count);
	ft_subssort(words, w_count, &alphlong_cmp);
	ord_print(words, w_count);
}

int				main(int argc, char **argv)
{
	int				len;

	if (argc == 2)
	{
		len = ft_countword(argv[1]);
		if (len <= 0)
			return (0);
		ord_alphlong(argv[1], len);
	}
	write(1, "\n", 1);
	return (0);
}

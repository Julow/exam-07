/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_diam.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 10:46:36 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 11:47:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef G_DIAM_H
# define G_DIAM_H

typedef struct	s_node
{
	int				a;
	int				b;
	int				flags;
}				t_node;

# define FLAG_BY_A		(1 << 1)
# define FLAG_BY_B		(1 << 2)

int				parse_nodes(char const *str, t_node *nodes, int n);

int				track_nodes(t_node *nodes, int count, int curr);

int				ft_countword(char const *str);
int				ft_max(int a, int b);
void			ft_putnbr(int nbr);
int				ft_isspace(char c);
int				ft_isdigit(char c);
int				ft_atoub(char const *str, unsigned int *b);

#endif

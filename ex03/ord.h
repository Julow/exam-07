/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ord.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/22 09:56:30 by exam              #+#    #+#             */
/*   Updated: 2015/04/22 10:25:59 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ORD_H
# define ORD_H

# define LOWER(c)		((c >= 'A' && c <= 'Z') ? (c) + 32 : (c))

typedef struct	s_sub
{
	char			*str;
	int				length;
}				t_sub;

# define SUB(s,l)		((t_sub){(s), (l)})

int				ft_subsword(char *str, t_sub *subs, int n);

void			ft_subssort(t_sub *subs, int len, int (*cmd)(t_sub*, t_sub*));

int				ft_countword(char const *str);
int				ft_isspace(char c);

#endif

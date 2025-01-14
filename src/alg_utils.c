/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:07:17 by nateshim          #+#    #+#             */
/*   Updated: 2025/01/14 11:11:58 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_and_swap(t_init *s)
{
	ft_rotatea(s);
	ft_swapa(s);
	ft_reverse_rotatea(s);
}

void	move_to_top(t_init *s)
{
	int	half;

	half = s->int_a / 2;
	if (s->small_i < half)
	{
		s->i = 0;
		while (s->i < s->small_i)
		{
			ft_rotatea(s);
			s->i++;
		}
	}
	else
	{
		s->i = s->int_a;
		while (s->i > s->small_i)
		{
			ft_reverse_rotatea(s);
			s->i--;
		}
	}
}

void	locate_minimum(t_init *s)
{
	s->i = 1;
	s->small_i = 0;
	s->min = s->pile_a[0];
	while (s->i < s->int_a)
	{
		if (s->pile_a[s->i] < s->min)
		{
			s->min = s->pile_a[s->i];
			s->small_i = s->i;
		}
		s->i++;
	}
}

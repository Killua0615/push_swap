/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:07:26 by nateshim          #+#    #+#             */
/*   Updated: 2025/01/14 11:07:29 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_algorithms(t_init *s)
{
	if (s->int_a == 2)
		handle_two_elements(s);
	else if (s->int_a == 3)
		handle_three_elements(s);
	else if (s->int_a == 4)
		handle_four_elements(s);
	else if (s->int_a == 5)
		handle_five_elements(s);
	else if (s->int_a >= 6)
		handle_large_set(s);
}

void	handle_two_elements(t_init *s)
{
	if (s->pile_a[0] > s->pile_a[1])
		ft_swapa(s);
}

void	handle_three_elements(t_init *s)
{
	if (s->pile_a[0] > s->pile_a[1])
	{
		if (s->pile_a[1] < s->pile_a[2])
		{
			if (s->pile_a[0] > s->pile_a[2])
				ft_rotatea(s);
			else
				ft_swapa(s);
		}
		else
		{
			ft_swapa(s);
			ft_reverse_rotatea(s);
		}
	}
	else
	{
		if (s->pile_a[0] > s->pile_a[2])
			ft_reverse_rotatea(s);
		else
			rotate_and_swap(s);
	}
}

void	handle_four_elements(t_init *s)
{
	locate_minimum(s);
	move_to_top(s);
	if (!is_sorted(s))
	{
		ft_pushb(s);
		handle_three_elements(s);
		ft_pusha(s);
	}
}

void	handle_five_elements(t_init *s)
{
	locate_minimum(s);
	move_to_top(s);
	if (!is_sorted(s))
	{
		ft_pushb(s);
		handle_four_elements(s);
		ft_pusha(s);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:08:05 by nateshim          #+#    #+#             */
/*   Updated: 2025/01/14 13:01:01 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* スタックaのすべての要素を1つ下にシフトします。
   最後の要素が最初の要素になります。 */
void	ft_reverse_rotatea(t_init *s)
{
	int	tmp;
	int	i;

	i = s->int_a - 1;
	tmp = s->pile_a[i];
	while (i > 0)
	{
		s->pile_a[i] = s->pile_a[i - 1];
		i--;
	}
	s->pile_a[i] = tmp;
	if (s->counter == 0)
		ft_printf("rra\n");
}

/* スタックbのすべての要素を1つ下にシフトします。
   最後の要素が最初の要素になります。 */
void	ft_reverse_rotateb(t_init *s)
{
	int	tmp;
	int	i;

	i = s->int_b - 1;
	tmp = s->pile_b[i];
	while (i > 0)
	{
		s->pile_b[i] = s->pile_b[i - 1];
		i--;
	}
	s->pile_b[i] = tmp;
	if (s->counter == 0)
		ft_printf("rra\n");
}

/* rrr: rra と rrb を同時に実行します */
void	ft_reverse_rotater(t_init *s)
{
	s->counter = 1;
	ft_reverse_rotatea(s);
	ft_reverse_rotateb(s);
	ft_printf("rrr\n");
	s->counter = 0;
}

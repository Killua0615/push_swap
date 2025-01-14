/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:08:02 by nateshim          #+#    #+#             */
/*   Updated: 2025/01/14 11:08:03 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* スタックaの要素を1つ上にシフトします。 */
void	ft_rotatea(t_init *s)
{
	int	tmp;
	int	i;

	if (s->int_a > 0)
	{
		tmp = s->pile_a[0];
		i = 0;
		while (i < s->int_a - 1)
		{
			s->pile_a[i] = s->pile_a[i + 1];
			i++;
		}
		s->pile_a[i] = tmp;
		if (s->counter == 0)
			ft_printf("ra\n");
	}
}

/* スタックbの要素を1つ上にシフトします。 */
void	ft_rotateb(t_init *s)
{
	int	tmp;
	int	i;

	if (s->int_b > 0)
	{
		tmp = s->pile_b[0];
		i = 0;
		while (i < s->int_b - 1)
		{
			s->pile_b[i] = s->pile_b[i + 1];
			i++;
		}
		s->pile_b[i] = tmp;
		if (s->counter == 0)
			ft_printf("rb\n");
	}
}

/* raとrbを同時に実行します。 */
void	ft_rotater(t_init *s)
{
	s->counter = 1;
	ft_rotatea(s);
	ft_rotateb(s);
	ft_printf("rr\n");
	s->counter = 0;
}

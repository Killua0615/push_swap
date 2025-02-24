/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:08:19 by nateshim          #+#    #+#             */
/*   Updated: 2025/01/14 11:08:21 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_normalize(t_init *s)
{
	int	i;
	int	j;
	int	count;

	init_stack(s);
	i = -1;
	while (++i < s->int_a)
		s->tmp[i] = s->pile_a[i];
	i = 0;
	while (i < s->int_a)
	{
		j = -1;
		count = -1;
		while (++j < s->int_a)
		{
			if (s->tmp[i] < s->tmp[j])
				count++;
		}
		s->pile_a[i] = ((s->int_a - 1) - count);
		i++;
	}
	free(s->tmp);
}

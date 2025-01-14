/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:08:15 by nateshim          #+#    #+#             */
/*   Updated: 2025/01/14 11:08:16 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* NOT USED NOW!


#include "push_swap.h"

void	sort_tab_get_median(t_init *s, int *tab, unsigned int size)
{
	unsigned int	i = 0;
	int				temp;

	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i+ 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
	s->median = get_median(tab, size)
}

int	get_median(int *tab, int size)
{
	int	i;
	int	median;

	i = size / 2;
	if (size % 2 == 1)
		median = tab[i];
	else
	{
		i = (size / 2)
		median = tab[i] - 0.5;
	}
	return (median);
}*/

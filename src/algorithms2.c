#include "push_swap.h"

void	handle_large_set(t_init *s)
{
	int	bit_index;
	int	element_index;
	int	total_elements;

	bit_index = 0;
	total_elements = s->int_a;
	while (!is_sorted(s))
	{
		element_index = 0;
		while (element_index < total_elements && !is_sorted(s))
		{
			element_index++;
			if (((s->pile_a[0] >> bit_index) & 1) == 0)
				ft_pushb(s);
			else
				ft_rotatea(s);
		}
		while (s->int_b > 0)
			ft_pusha(s);
		bit_index++;
	}
}

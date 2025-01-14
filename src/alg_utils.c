#include "push_swap.h"

void	rotate_and_swap(t_init *s)
{
	ft_rotatea(s);
	ft_swapa(s);
	ft_reverse_rotatea(s);
}

void	move_to_top(t_init *s)
{
	int half = s->int_a / 2;
	if (s->small_i < half)
	{
		for (s->i = 0; s->i < s->small_i; s->i++)
			ft_rotatea(s);
	}
	else
	{
		for (s->i = s->int_a; s->i > s->small_i; s->i--)
			ft_reverse_rotatea(s);
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

#include "push_swap.h"

/* スタックaの要素を1つ上にシフトします。 */
void	ft_rotatea(t_init *s)
{
	if (s->int_a > 0)
	{
		int	tmp = s->pile_a[0];
		int	i = 0;
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
	if (s->int_b > 0)
	{
		int	tmp = s->pile_b[0];
		int	i = 0;
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

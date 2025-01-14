#include "push_swap.h"

/* スタックaの最初の2つの要素を交換します。
   要素が1つ以下の場合は何もしません。 */
void	ft_swapa(t_init *s)
{
	int	tmp;

	if (s->int_a > 1)
	{
		tmp = s->pile_a[0];
		s->pile_a[0] = s->pile_a[1];
		s->pile_a[1] = tmp;
		if (s->counter == 0)
			ft_printf("sa\n");
	}
}

/* スタックbの最初の2つの要素を交換します。
   要素が1つ以下の場合は何もしません。 */
void	ft_swapb(t_init *s)
{
	int	tmp;

	if (s->int_b > 1)
	{
		tmp = s->pile_b[0];
		s->pile_b[0] = s->pile_b[1];
		s->pile_b[1] = tmp;
		if (s->counter == 0)
			ft_printf("sb\n");
	}
}

/* saとsbを同時に実行します。 */
void	ft_swaps(t_init	*s)
{
	s->counter = 1;
	ft_swapa(s);
	ft_swapb(s);
	ft_printf("ss\n");
	s->counter = 0;
}

/* スタックbの最初の要素をスタックaの上に移動します。
   スタックbが空の場合は何もしません。 */
void	ft_pusha(t_init *s)
{
	int	i;

	if (s->int_b > 0)
	{
		s->int_a++;
		i = s->int_a - 1;
		while (i > 0)
		{
			s->pile_a[i] = s->pile_a[i - 1];
			i--;
		}
		s->pile_a[0] = s->pile_b[0];
		s->int_b--;
		i = 0;
		while (i < s->int_b)
		{
			s->pile_b[i] = s->pile_b[i + 1];
			i++;
		}
		ft_printf("pa\n");
	}
}

/* スタックaの最初の要素をスタックbの上に移動します。
   スタックaが空の場合は何もしません。 */
void	ft_pushb(t_init *s)
{
	int	i;

	if (s->int_a > 0)
	{
		s->int_b++;
		i = s->int_b - 1;
		while (i > 0)
		{
			s->pile_b[i] = s->pile_b[i - 1];
			i--;
		}
		s->pile_b[0] = s->pile_a[0];
		s->int_a--;
		i = 0;
		while (i < s->int_a)
		{
			s->pile_a[i] = s->pile_a[i + 1];
			i++;
		}
		ft_printf("pb\n");
	}
}

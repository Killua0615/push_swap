/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateshim <nateshim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:08:09 by nateshim          #+#    #+#             */
/*   Updated: 2025/01/14 11:12:33 by nateshim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_init	ps;

	ps.int_a = 0;
	ps.int_b = 0;
	ps.i = 0;
	if (argc > 1)
	{
		if (argc == 2)
			two_args_init(&ps, argv);
		else if (argc > 2)
			mult_args_init(&ps, argc, argv);
		process_input(&ps);
	}
}

void	process_input(t_init *ps)
{
	check_duplicates(ps->pile_a, ps->int_a);
	if (is_sorted(ps))
		free_stacks(ps);
	else
	{
		ft_normalize(ps);
		execute_algorithms(ps);
		free_stacks(ps);
	}
}

void	two_args_init(t_init *ps, char **argv)
{
	ps->arguments = ft_split(argv[1], ' ');
	if (!ps->arguments)
		error();
	while (ps->arguments[ps->int_a])
	{
		ps->counter = 0;
		validate_numeric(ps->arguments[ps->int_a]);
		ps->int_a++;
	}
	create_stacks(ps);
	fill_pile_a(ps);
	free(ps->arguments);
}

void	mult_args_init(t_init *ps, int argc, char **argv)
{
	ps->int_a = argc - 1;
	create_stacks(ps);
	while (ps->i < ps->int_a)
	{
		validate_numeric(argv[ps->i + 1]);
		validate_max_min(argv[ps->i + 1]);
		ps->pile_a[ps->i] = ft_atoi(argv[ps->i + 1]);
		ps->i++;
	}
}

void	fill_pile_a(t_init *ps)
{
	while (ps->arguments[ps->i])
	{
		validate_max_min(ps->arguments[ps->i]);
		ps->pile_a[ps->i] = ft_atoi(ps->arguments[ps->i]);
		free(ps->arguments[ps->i]);
		ps->i++;
	}
}

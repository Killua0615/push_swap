#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include "libft.h"
#include "ft_printf.h"

// Add your struct definitions here
typedef struct s_init {
	int *pile_a;
	int *pile_b;
	int int_a;
	int int_b;
	int i;
	int counter;
	int small_i;
	int min;
	long *tmp;
	char **arguments;
} t_init;

/* algorithms1/2.c */
void	execute_algorithms(t_init *s);
void	handle_two_elements(t_init *s);
void	handle_three_elements(t_init *s);
void	handle_four_elements(t_init *s);
void	handle_five_elements(t_init *s);
void	handle_large_set(t_init *s);

/* alg_utils.c */
void	rotate_and_swap(t_init *s);
void	move_to_top(t_init *s);
void	locate_minimum(t_init *s);

/* free.c */
void	free_stacks(t_init *s);

/* helpers.c */
void	create_stacks(t_init *s);
void	init_stack(t_init *s);

/* normalize.c */
void	ft_normalize(t_init *s);

/* instructions1.c */
void	ft_swapa(t_init *s);
void	ft_swapb(t_init *s);
void	ft_swaps(t_init *s);
void	ft_pusha(t_init *s);
void	ft_pushb(t_init *s);

/* instructions2.c */
void	ft_rotatea(t_init *s);
void	ft_rotateb(t_init *s);
void	ft_rotater(t_init *s);
int check_order(t_init *s);

/* instructions3.c */
void	ft_reverse_rotatea(t_init *s);
void	ft_reverse_rotateb(t_init *s);
void	ft_reverse_rotater(t_init *s);

void two_args_init(t_init *ps, char **argv);
void mult_args_init(t_init *ps, int argc, char **argv);
void process_input(t_init *ps);
void fill_pile_a(t_init *ps);

/* checks.c */
int		is_sorted(t_init *s);
void	validate_numeric(char *str);
void	validate_max_min(char *str);
void	check_duplicates(int *array, int length);
int		error(void);

#endif

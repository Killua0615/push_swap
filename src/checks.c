#include "push_swap.h"

int	is_sorted(t_init *s)
{
	int	index;

	index = 0;
	while (index < s->int_a - 1)
	{
		if (s->pile_a[index] > s->pile_a[index + 1])
			return (0);
		index++;
	}
	return (1);
}

void	validate_max_min(char *str)
{
	int		index;
	int		length;

	index = 0;
	length = ft_strlen(str);
	while (str[index])
	{
		if (str[0] == '-')
		{
			if (length > 11)
				error();
			if (length == 11 && ft_strncmp("-2147483648", str, 11) < 0)
				error();
		}
		else
		{
			if (length > 10)
				error();
			if (length == 10 && ft_strncmp("2147483647", str, 10) < 0)
				error();
		}
		index++;
	}
}

void	validate_numeric(char *str)
{
	int	index;

	index = 0;
	if ((str[index] == '-' || str[index] == '+') && ft_isdigit(str[index + 1]))
		index++;
	while (str[index])
	{
		if (!ft_isdigit(str[index]))
			error();
		index++;
	}
}

void	check_duplicates(int *array, int length)
{
	int	i;
	int	j;

	i = 0;
	while (i < length - 1)
	{
		j = i + 1;
		while (j < length)
		{
			if (array[i] == array[j])
				error();
			j++;
		}
		i++;
	}
}

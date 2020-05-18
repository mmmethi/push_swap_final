#include "../includes/push_swap.h"

int	op_swap(t_list *s_a, t_list *s_b, char c, int o){
	int		buff;
	int		*tmp;
	int		size;

	tmp = s_a->nbr;
	size = s_a->size;
	if (s_a->size < 2)
		return (0);
	buff = tmp[size - 1];
	tmp[size - 1] = tmp[size - 2];
	tmp[size - 2] = buff;
	if (s_b)
	{
		if (o >= 1)
			ft_putchar(c);
		op_swap(s_b, NULL, 0, o);
		if (o == 2)
			print_stacks(*s_a, *s_b);
	}
	else if (c)
		test_swap(s_a, c, o);
	return (1);
}

int	op_push(t_list *s_a, t_list *s_b, char c, int o){
	int		*tmp_a;
	int		*tmp_b;

	if (o >= 1)
		ft_putchar(c);
	tmp_a = s_a->nbr;
	tmp_b = s_b->nbr;
	if (s_a->size < 1)
		return (0);
	s_b->size++;
	tmp_b[s_b->size - 1] = tmp_a[s_a->size - 1];
	s_a->size--;
	if (o == 2)
		stack_print(*s_b, c - 'a' + 'A');
	return (1);
}

int	op_rotate(t_list *s_a, t_list *s_b, char c, int o){
	int		buff;
	int		*tmp;
	int		size;

	tmp = s_a->nbr;
	size = s_a->size + 1;
	if (s_a->size < 2)
		return (0);
	buff = tmp[size - 2];
	while (--size >= 2)
		tmp[size - 1] = tmp[size - 2];
	tmp[0] = buff;
	if (s_b)
	{
		if (o >= 1)
			ft_putchar(c);
		op_rotate(s_b, NULL, 0, o);
		if (o == 2)
			print_stacks(*s_a, *s_b);
	}
	else if (c)
		test_rotate(s_a, c, o);
	return (1);
}

int	op_revrot(t_list *s_a, t_list *s_b, char c, int o)
{
	int		buff;
	int		*tmp;
	int		size;
	int		i;

	i = -1;
	tmp = s_a->nbr;
	size = s_a->size;
	if (s_a->size < 2)
		return (0);
	buff = tmp[0];
	while (++i < size)
		tmp[i] = tmp[i + 1];
	tmp[size - 1] = buff;
	if (s_b)
	{
		if (o >= 1)
			ft_putchar(c);
		op_revrot(s_b, NULL, 0, o);
		if (o == 2)
			print_stacks(*s_a, *s_b);
	}
	else if (c)
		test_revrot(s_a, c, o);
	return (1);
}

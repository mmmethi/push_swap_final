#include "../includes/push_swap.h"

static int	case_three(int a, int b, int c)
{
	if (a > b && b > c)
		return (0);
	else if (a < b && b > c && a < c)
		return (2);
	else if (a > b && b < c && a < c)
		return (3);
	else
		return (1);
}

int			sort_three(t_list *stack, char c, int o)
{
	int		*tmp;
	int		res;
	int		op;

	op = 0;
	tmp = stack->nbr;
	while ((res = case_three(tmp[0], tmp[1], tmp[2])))
	{
		if (res == 1)
			op += op_swap(stack, NULL, c, o);
		else if (res == 3)
			op += op_rotate(stack, NULL, c, o);
		else if (res == 2)
			op += op_revrot(stack, NULL, c, o);
	}
	return (op);
}

int			sort_two(t_list *pile, char c, int o)
{
	int		*tmp;

	tmp = pile->nbr;
	if (tmp[0] < tmp[1])
	{
		op_swap(pile, NULL, c, o);
		return (1);
	}
	return (0);
}

int			sort_empty(t_list *dest, t_list *src, char c, int o)
{
	int		op;

	op = 0;
	while (src->size > 0)
		op += op_push(src, dest, c, o);
	return (op);
}
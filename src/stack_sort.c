#include "../includes/push_swap.h"

#define CASE_A ((!rev && tmp[0] < tmp[1]) || (rev && tmp[0] > tmp[1]))
#define CASE_B ((!rev && tmp[i] < tmp[i + 1]) || (rev && tmp[i] > tmp[i + 1]))
#define A_MED ((stack_a->size)/2)

int		is_sort(t_list *stack_a, int rev){
	int		i;
	int		*tmp;

	tmp = stack_a->nbr;
	i = 1;
	while (i <= stack_a->size - 3)
	{
		if ((!rev && tmp[i] < tmp[i + 1]) || (rev && tmp[i] > tmp[i + 1]))
			return (1);
		i++;
	}
	if (CASE_A && CASE_B)
		return (-3);
	if (CASE_A)
		return (-2);
	if (CASE_B)
		return (-1);
	return (0);
}

int		sort_beg(t_list *stack_a, int o)
{
	op_revrot(stack_a, NULL, 'a', o);
	op_revrot(stack_a, NULL, 'a', o);
	op_swap(stack_a, NULL, 'a', o);
	op_rotate(stack_a, NULL, 'a', o);
	op_rotate(stack_a, NULL, 'a', o);
	return (5);
}

int		sort_default(t_list *stack_a, t_list *stack_b, int o){
	int		b;
	int		pos;
	int		op;

	op = 0;
	while (stack_a->size > 3)
	{
		pos = check_bigger(*stack_a, &b);
		if (b == STACK_A_LAST)
			op += op_push(stack_a, stack_b, 'b', o);
		else if (pos > A_MED)
			op += op_rotate(stack_a, NULL, 'a', o);
		else
			op += op_revrot(stack_a, NULL, 'a', o);
	}
	op += sort_three(stack_a, 'a', o);
	op += sort_empty(stack_a, stack_b, 'a', o);
	return (op);
}

int		stack_sort(t_list *stack_a, t_list *stack_b, int cases, int o){
	int		op;

	op = 0;
	if (stack_a->size == 3)
		op += sort_three(stack_a, 'a', o);
	else if (cases == -3)
	{
		op += op_swap(stack_a, NULL, 'a', o);
		op += sort_beg(stack_a, o);
	}
	else if (cases == -1)
		op += op_swap(stack_a, NULL, 'a', o);
	else if (cases == -2)
		op += sort_beg(stack_a, o);
	else
		op += sort_default(stack_a, stack_b, o);
	if (is_sort(stack_a, 0))
		op += stack_sort(stack_a, stack_b, 1, o);
	return (op);
}

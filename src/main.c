#include "../includes/push_swap.h"

void	end_message(int op, int el)
{
	if (op == -1)
		ft_putstr("Only one element!");
	if (op == 0)
		ft_putstr("Stack already sorted!");
	if (op > 0)
	{
		ft_putnbr(op);
		ft_putnbr(el);
		ft_putstr("elements");
	}
}

void	push_swap(t_list a, int o)
{
	t_list		b;
	int			cases;
	int			op;

	b.nbr = (int*)malloc(sizeof(int) * a.size - 2);
	b.size = 0;
	stack_print(a, 'A');
	if (a.size > 2 && (cases = is_sort(&a, 0)))
	{
		ft_putstr("sorting stack:\n\n");
		op = stack_sort(&a, &b, cases, o);
		ft_putstr("\n\nfinal stack:\n\n");
		stack_print(a, 'A');
		end_message(op, a.size);
	}
	else if (a.size == 2 && is_sort(&a, 0))
	{
		ft_putstr("\n\nsorting stack:\n\n");
		op_swap(&a, NULL, 'a', o);
		ft_putstr("\n\nfinal stack:");
		stack_print(a, 'A');
		end_message(1, a.size);
	}
	else
		end_message(0, 0);
}

int		main(int argc, char **argv)
{
	t_list		a;
	int			opts;

	if (argc < 2)
		return (0);
	opts = init_program(argv, &a);
	if (a.size == 0 || opts == -1)
		ft_putstr("Error\n\tUsage: -[hv] [number1 number2 ... numberX]");
	else if (a.size == 1)
		end_message(-1, 0);
	else if (opts == -2)
		end_message(0, 0);
	else
		push_swap(a, opts);
	ft_putchar('\n');
	return (0);
}
#include "../includes/push_swap.h"

void			print_stacks(t_list a, t_list b){
	stack_print(a, 'A');
	ft_putchar('\t');
	stack_print(b, 'B');
}

void			test_swap(t_list *s_a, char c, int o){
	if (o >= 1)
		ft_putchar(c);
	if (o == 2)
		stack_print(*s_a, c - 'a' + 'A');
}

void			test_rotate(t_list *s_a, char c, int o){
	if (o >= 1)
		ft_putchar(c);
	if (o == 2)
		stack_print(*s_a, c - 'a' + 'A');
}

void			test_revrot(t_list *s_a, char c, int o)
{
	if (o >= 1)
		ft_putchar(c);
	if (o == 2)
		stack_print(*s_a, c - 'a' + 'A');
}

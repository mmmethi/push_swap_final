#include "../includes/push_swap.h"

#include <stdio.h>

static void		stack_fill(t_list *stack, char **src)
{
	int		*tmp;
	int		i;

	i = 1;
	tmp = stack->nbr;
	while ((src[i] && src[i][0] == '-') || !ft_strcmp(src[i], "--"))
	{
		if (ISNUM(src[i][1]))
			break ;
		i++;
	}
	while (src[i])
	{
		*tmp = ft_atoi(src[i]);
		tmp++;
		i++;
	}
}

static t_list		stack_malloc(int size)
{
	t_list	stack;

	stack.nbr = (int*)malloc(sizeof(int) * size);
	stack.size = size;
	return (stack);
}

t_list				stack_create(char **list)
{
	int		    i;
	int		    t;
	t_list		stack;

	t = 1;
	while ((list[t] && list[t][0] == '-') || !ft_strcmp(list[t], "--"))
	{
		if (ISNUM(list[t][1]))
			break ;
		t++;
	}
	i = t;
	while (list[i])
		i++;
	stack = stack_malloc(i - t);
	stack_fill(&stack, list);
	return (stack);
}

void			stack_print(t_list stack, char c)
{
	int		i;

	i = 0;
	ft_putchar(c);
	while (i < stack.size)
	{
		ft_putnbr(stack.nbr[i]);
		ft_putchar('|');
		i++;
	}
	ft_putchar('\n');
}

void			pile_destroy(t_list *stack)
{
	free(stack->nbr);
	stack->size = 0;
}
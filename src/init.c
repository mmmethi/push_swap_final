#include "../includes/push_swap.h"

int     init_opt(char **av){
    int i;
    int j;
    int op;

    i = 1;
    op = 1;
    while ((av[i] && (av[i][0] == '-' || ft_strcmp(av[i], "--")))){
        j = 1;
		if (ISNUM(av[i][j]))
			return (op);
		while (av[i][j]){
			if (av[i][j] == 'h')
				op = 0;
			else if (av[i][j] == 'v')
				op = 2;
			else
				return (-1);
			j++;
		}
		i++;
	}
	return (op);

}
int		init_program(char **argv, t_list *s){
	int		o;

	if ((o = init_opt(argv)) == -1 || !check_arg(argv))
		return (o);
	*s = stack_create(argv);
	return (o);
}
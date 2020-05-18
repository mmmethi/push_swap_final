/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 01:19:03 by mmmethi           #+#    #+#             */
/*   Updated: 2019/07/24 01:19:21 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

# define STACK_A_LAST (stack_a->nbr)[stack_a->size - 1]
# define STACK_B_LAST (stack_b->nbr)[stack_b->size - 1]
# define ISNUM(c) (c >= '0' && c <= '9')

typedef struct  s_list
{
    int         *nbr;
    int         size;
}               t_list;


int			    check_arg(char **list);
int				check_bigger(t_list pile, int *b);
int				op_swap(t_list *s_a, t_list *s_b, char c, int o);
int				op_push(t_list *s_a, t_list *s_b, char c, int o);
int				op_rotate(t_list *s_a, t_list *s_b, char c, int o);
int				op_revrot(t_list *s_a, t_list *s_b, char c, int o);

int				init_program(char **argv, t_list *p);
void			print_stacks(t_list a, t_list b);
void			test_swap(t_list *s_a, char c, int o);
void			test_rotate(t_list *s_a, char c, int o);
void			test_revrot(t_list *s_a, char c, int o);

int				stack_sort(t_list *stack_a, t_list *stack_b, int cases, int o);
t_list			stack_create(char **list);
void			stack_destroy(t_list *stack);
void			stack_print(t_list stack, char c);
int				is_sort(t_list *stack_a, int rev);
int				sort_three(t_list *stack, char c, int o);
int				sort_empty(t_list *dest, t_list *src, char c, int o);

#endif
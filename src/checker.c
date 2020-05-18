/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 01:37:01 by mmmethi           #+#    #+#             */
/*   Updated: 2020/04/24 01:37:06 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int      check_nbr(char **list){
    int i;
    int j;

    i = 1;
    while ((list[i] && list[i][0] == '-') || !ft_strcmp(list[i], "--")){
        if (ISNUM(list[i][1]))
            break ;
        i++;
    }

    while (list[i]){
        j = 0;
        if (list[i][j] == '-' || list[i][j] == '+')
            j++;
        while (list[i][j]){
            if (!ISNUM(list[i][j]))
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

static int      check_dup(char **list){
    int i;
    int j;

    i = 0;
    while (list[i]){
        j = i + 1;
        while (list[j]){
            if (!ft_strcmp(list[i], list[j]))
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int             check_bigger(t_list stack, int *b){
    int i;

    i = 1;
    *b = (stack.nbr)[0];
    while (i < stack.size){
        if ((stack.nbr)[i] < * b)
            *b = (stack.nbr)[i];
        i++;
    }
    i = 0;
    while ((stack.nbr)[i] != *b)
        i++;
    return (i);
}

static int      check_max(char **list){
    int i;

    i = 1;
    while (list[i]){
        if (ft_strlen(list[i]) == ft_strlen("2147483647")){
            if (ft_strcmp(list[i], "2147483647") > 0)
                return (0);
        }
        else if (ft_strlen(list[i]) > ft_strlen("2147483647")){
            return (0);
        }
        i++;
    }
    return (1);
}

int			check_arg(char **list){
	if (check_nbr(list) && check_dup(list) && check_max(list))
		return (1);
	return (0);
}

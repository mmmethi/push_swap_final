/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:33:21 by mmmethi           #+#    #+#             */
/*   Updated: 2019/06/28 14:41:43 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if ((unsigned char)*s1 - (unsigned char)*s2 > 0)
		return (1);
	else if ((unsigned char)*s1 - (unsigned char)*s2 < 0)
		return (-1);
	else
		return (0);
}
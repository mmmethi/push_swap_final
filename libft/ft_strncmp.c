/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:41:46 by mmmethi           #+#    #+#             */
/*   Updated: 2019/06/28 14:52:15 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 != '\0' && *s1 == *s2)
	{
		n--;
		s1++;
		s2++;
	}
	if (n == 0)
		return (0);
	if (*(unsigned char*)s1 - *(unsigned char*)s2 > 0)
		return (1);
	else if (*(unsigned char*)s1 - *(unsigned char*)s2 < 0)
		return (-1);
	else
		return (0);
}

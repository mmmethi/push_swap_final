/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:57:49 by mmmethi           #+#    #+#             */
/*   Updated: 2019/06/28 14:53:37 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	m;

	s = 0;
	m = 0;
	while (dst[s] && s < dstsize)
		s++;
	while ((src[m]) && ((s + m + 1) < dstsize))
	{
		dst[s + m] = src[m];
		m++;
	}
	if (s != dstsize)
		dst[s + m] = '\0';
	return (s + ft_strlen(src));
}

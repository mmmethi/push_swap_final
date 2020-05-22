/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:21:13 by mmmethi           #+#    #+#             */
/*   Updated: 2019/06/12 14:36:28 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dstp;
	char	*srcp;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = -1;
	dstp = (char *)dst;
	srcp = (char *)src;
	if (srcp < dstp)
		while ((int)(--len) >= 0)
			*(dstp + len) = *(srcp + len);
	else
		while (++i < len)
			*(dstp + i) = *(srcp + i);
	return (dst);
}

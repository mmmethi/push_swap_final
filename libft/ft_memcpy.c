/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:29:48 by mmmethi           #+#    #+#             */
/*   Updated: 2019/06/10 13:57:16 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*dstp;
	const char		*srcp;

	if (dst == NULL && src == NULL)
		return (NULL);
	dstp = dst;
	srcp = src;
	while (n > 0)
	{
		*dstp++ = *srcp++;
		n--;
	}
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:30:57 by event             #+#    #+#             */
/*   Updated: 2019/06/10 14:43:02 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t hay_len)
{
	size_t	nee_len;

	if (*needle == '\0')
		return ((char *)haystack);
	nee_len = ft_strlen(needle);
	while (*haystack != '\0' && hay_len-- >= nee_len)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, nee_len) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}

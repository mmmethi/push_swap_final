/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:17:21 by event             #+#    #+#             */
/*   Updated: 2019/06/10 15:35:10 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char		*str;
	size_t		nee_len;
	size_t		i;
	size_t		k;

	str = (char *)haystack;
	if (!(nee_len = ft_strlen(needle)))
		return (str);
	i = 0;
	while (str[i])
	{
		k = 0;
		while (needle[k] && needle[k] == str[i + k])
			k++;
		if (k == nee_len)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

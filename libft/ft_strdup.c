/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmmethi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 09:21:22 by mmmethi           #+#    #+#             */
/*   Updated: 2019/06/12 14:16:38 by mmmethi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str1)
{
	char *str2;

	str2 = (char *)malloc(sizeof(char) * (ft_strlen(str1) + 1));
	if (str2 == NULL)
		return (NULL);
	else
		return (ft_strcpy(str2, str1));
}

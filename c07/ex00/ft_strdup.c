/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 15:42:43 by cdaniel           #+#    #+#             */
/*   Updated: 2021/06/09 16:49:25 by cdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_len;
	int		i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	dest = (char *)malloc(sizeof(*dest) * src_len + 1);
	i = 0;
	while (i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 01:11:28 by cdaniel           #+#    #+#             */
/*   Updated: 2021/06/06 16:20:59 by cdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{
		while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
			i++;
	}
	else
		return (0);
	return (s1[i] - s2[i]);
}

int	main (void)
{
	char a[] = "hello";
	char b[] = "hellO";

	printf("%d\n", ft_strncmp(a, b, 4));
}

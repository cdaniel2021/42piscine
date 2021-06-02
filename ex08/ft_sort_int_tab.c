/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 01:46:22 by cdaniel           #+#    #+#             */
/*   Updated: 2021/05/27 02:52:33 by cdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	a;
	int	b;

	b = 1;
	a = 0;
	while (a < size)
	{
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				swap = tab[a];
				tab[a] = tab[b];
				tab[b] = swap;
				b = 1;
				a = 0;
			}
			b++;
		}
		a++;
		b = a + 1;
	}
}

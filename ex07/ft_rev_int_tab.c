/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:41:58 by cdaniel           #+#    #+#             */
/*   Updated: 2021/06/01 14:30:25 by cdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	hold;
	int	x;

	x = 0;
	size--;
	while (x < size)
	{
		hold = tab[x];
		tab[x] = tab[size];
		tab[size] = hold;
		i++;
		size--;
	}
}

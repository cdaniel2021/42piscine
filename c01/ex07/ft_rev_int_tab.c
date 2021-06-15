/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:41:58 by cdaniel           #+#    #+#             */
/*   Updated: 2021/06/02 16:58:46 by cdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	hold;
	int	i;

	i = 0;
	size--;
	while (i <= size)
	{
		hold = tab[i];
		tab[i] = tab[size];
		tab[size] = hold;
		i++;
		size--;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 01:02:02 by cdaniel           #+#    #+#             */
/*   Updated: 2021/06/07 03:18:36 by cdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main (int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	while (argc > 1)
	{
		if (i == 0)
			return (0);
		else
			ft_putstr(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:50:49 by cdaniel           #+#    #+#             */
/*   Updated: 2021/05/25 16:50:58 by cdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_num(int num)
{
	if (num <= 9)
	{
		ft_putchar('0');
		ft_putchar(num + '0');
	}
	else
	{
		ft_putchar(num / 10 + '0');
		ft_putchar(num % 10 + '0');
	}
}

void	print_res(int a, int b)
{
	print_num(a);
	ft_putchar(' ');
	print_num(b);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_res(a, b);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		b = 0;
		a++;
	}
}

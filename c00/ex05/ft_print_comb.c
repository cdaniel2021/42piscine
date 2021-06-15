/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 16:50:10 by cdaniel           #+#    #+#             */
/*   Updated: 2021/05/26 12:55:23 by cdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char	uno;
	char	duo;
	char	tri;

	uno = 48;
	while (uno <= 55)
	{
		duo = uno + 1;
		while (duo <= 56)
		{
			tri = duo + 1;
			while (tri <= 57)
			{
				write (1, &uno, 1);
				write (1, &duo, 1);
				write (1, &tri, 1);
				tri++;
				if ((uno < 55) || (duo < 56) || (tri < 57))
					write(1, ", ", 2);
			}	
			duo++;
		}
		uno++;
	}
}

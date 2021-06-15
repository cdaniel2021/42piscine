/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 22:52:44 by cdaniel           #+#    #+#             */
/*   Updated: 2021/06/08 00:59:21 by cdaniel          ###   ########.fr       */
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

int 	main (int	argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}

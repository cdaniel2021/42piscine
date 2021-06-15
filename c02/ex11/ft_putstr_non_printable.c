/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 22:23:30 by cdaniel           #+#    #+#             */
/*   Updated: 2021/06/06 19:17:05 by cdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_prthex(char np)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[np / 16]);
	ft_putchar(hex[np % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] < 32) || (str[i] == 127))
		{
			ft_putchar('\\');
			ft_prthex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

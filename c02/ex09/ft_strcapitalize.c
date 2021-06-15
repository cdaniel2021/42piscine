/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 19:44:06 by cdaniel           #+#    #+#             */
/*   Updated: 2021/06/09 17:29:00 by cdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] = str[i] - 32;
			else if (str[i - 1] == 32)
				str[i] = str[i] - 32;
			else if (str[i - 1] == 45)
				str[i] = str[i] - 32;
			else if (str[i - 1] == 43)
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	char a[] = "SALUT, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(a));

}

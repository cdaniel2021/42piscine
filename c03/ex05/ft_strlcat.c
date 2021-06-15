/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdaniel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 01:45:13 by cdaniel           #+#    #+#             */
/*   Updated: 2021/06/05 23:50:15 by cdaniel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	str_len;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}		
	dest[i] = '\0';
	str_len = 0;
	while (dest[str_len] != '\0')
		str_len++;
	return (str_len);
}

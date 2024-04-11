/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 18:37:10 by smercado          #+#    #+#             */
/*   Updated: 2024/04/04 08:17:52 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	int				div;
	int				mod;
	char			*hex;
	unsigned char	*temp;

	i = 0;
	hex = "0123456789abcdef";
	temp = (unsigned char *)str;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			div = temp[i] / 16;
			mod = temp[i] % 16;
			ft_putchar('\\');
			write(1, &hex[div], 1);
			write(1, &hex[mod], 1);
		}
		else
			ft_putchar(temp[i]);
		i++;
	}
}

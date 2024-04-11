/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 08:49:37 by smercado          #+#    #+#             */
/*   Updated: 2024/04/08 16:24:22 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

int	ft_negativos(int nblong)
{
	if (nblong == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	if (nblong == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		nblong = 147483648;
	}
	else if (nblong < 0)
	{
		write(1, "-", 1);
		nblong = nblong * -1;
	}
	return (nblong);
}

void	ft_putnbr(int nb)
{
	long	nblong;
	int		i;
	char	str[100];

	nblong = nb;
	i = 0;
	if (nb <= 0)
		nblong = ft_negativos(nblong);
	while (nblong > 0)
	{
		str[i] = (nblong % 10) + 48;
		nblong = nblong / 10;
		i++;
	}
	while (i -1 >= 0)
	{
		i--;
		write(1, &str[i], 1);
	}
}

int	main(void)
{
	int	num;

	num = -434432;
	ft_putnbr(num);
	return (0);
}

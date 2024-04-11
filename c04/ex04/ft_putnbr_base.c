/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:18:18 by smercado          #+#    #+#             */
/*   Updated: 2024/04/02 08:27:25 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		comprobar_errores(char *base);
void	ft_putnbr_base(int nbr, char *base);
void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	comprobar_errores(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (-1);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] == '+' || base[i] == '-') || (base[i] > 7 && base[i] < 13))
			return (-1);
		i++;
	}
	return (0);
}

int	ft_lengt(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr_long;

	nbr_long = nbr;
	if ((comprobar_errores(base)) == 0)
	{
		if (nbr_long < 0)
		{
			write(1, "-", 1);
			nbr_long = nbr_long * -1;
		}
		if (nbr_long < ft_lengt(base))
			write(1, &base[nbr_long], 1);
		if (nbr_long >= ft_lengt(base))
		{
			ft_putnbr_base((nbr_long / ft_lengt(base)), base);
			ft_putchar(base[nbr_long % ft_lengt(base)]);
		}
	}
}

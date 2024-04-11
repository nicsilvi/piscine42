/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:18:48 by smercado          #+#    #+#             */
/*   Updated: 2024/04/08 07:43:57 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_prime(int nb)
{
	int	i;
	int	contador;

	i = 2;
	contador = 0;
	if (i > nb)
		return (0);
	else
	{
		while (i <= nb)
		{
			if (nb % i == 0)
				contador++;
			i++;
		}
	}
	if (contador == 1)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	nuevo_num;

	i = 1;
	nuevo_num = nb;
	while (find_prime(nuevo_num) != 1)
	{
		nuevo_num = nb + i;
		i++;
	}
	return (nuevo_num);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 12:17:32 by smercado          #+#    #+#             */
/*   Updated: 2024/03/24 14:55:09 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	final;
	int	i;

	i = 0;
	final = size -1;
	while (i < final)
	{
		aux = tab[i];
		tab[i] = tab[final];
		tab[final] = aux;
		i++;
		final--;
	}
}

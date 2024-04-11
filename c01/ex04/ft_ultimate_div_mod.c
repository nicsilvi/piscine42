/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 19:21:30 by smercado          #+#    #+#             */
/*   Updated: 2024/03/24 10:18:38 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	auxa;
	int	auxb;
	int	c;
	int	m;

	auxa = *a;
	auxb = *b;
	c = auxa / auxb;
	m = auxa % auxb;
	*a = c;
	*b = m;
}

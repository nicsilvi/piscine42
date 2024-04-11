/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 13:30:41 by smercado          #+#    #+#             */
/*   Updated: 2024/03/22 14:00:54 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void t_print_comb2(void)
{
	int num1;
	int num2;

	num1 = 48;
	num2 = 48;
	while (num1 <= 56)
	{
		while (num2 <= 57)
		{
			ft_putchar(num1);
			ft_putchar(num1);
			ft_putchar(' ');
			ft_putchar(num2);
			ft_putchar(num2);
			
			num2 = num2 + algo


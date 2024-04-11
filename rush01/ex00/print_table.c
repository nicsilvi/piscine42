/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 09:17:19 by tatahere          #+#    #+#             */
/*   Updated: 2024/03/31 11:37:32 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_table(int table[9][9], int side_size)
{
	int		x;
	int		y;
	char	digit;

	y = 0;
	while (y < side_size)
	{
		x = 0;
		while (x < side_size)
		{
			digit = '0' + table[y][x];
			write(1, &digit, 1);
			if (x != side_size - 1)
				write(1, " ", 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}
/*
int main(void)
{
	int tabla[9][9];
	int side_size = 3;

	tabla[0][0] = 0;
	tabla[0][1] = 1;
	tabla[0][2] = 2;
	tabla[1][0] = 3;
	tabla[1][1] = 4;
	tabla[1][2] = 5;
	tabla[2][0] = 6;
	tabla[2][1] = 7;
	tabla[2][2] = 8;
	print_table(tabla, side_size);
}
*/

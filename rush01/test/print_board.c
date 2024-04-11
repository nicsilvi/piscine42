/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 09:17:19 by tatahere          #+#    #+#             */
/*   Updated: 2024/03/31 14:34:24 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_board(int *board, int size)
{
	int		row;
	int		col;
	char	digit;

	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			digit = *(board + (row * size) + col) + '0';
			write(1, &digit, 1);
			if (col + 1 < size)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

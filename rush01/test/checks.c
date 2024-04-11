/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:12:42 by smercado          #+#    #+#             */
/*   Updated: 2024/03/31 17:06:36 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int check_repeating_nb(int *board, int size);

int check_columns_down(int *board, int size, int *clues);

int check_columns_up(int *board, int size, int *clues);

int check_rows_left(int *board, int size, int *clues);

int check_rows_right(int *board, int size, int *clues);


int	ft_check_0(int *board, int size)
{
	int	row;
	int	col;
	int	i;

	i = 0;
	row = 0;
	while (row < size)
	{
		col = 0;
		while (col < size)
		{
			if (*(board + (size * row) + col) == 0)
			{
				return (-1);
			}
			col++;
		}
		row++;
	}
	return (0);
}

int	ft_checks(int *board, int *clues, int size)
{
	if (check_repeating_nb(board, size) != 0)
		return (-1);
	printf("check 1 pasa:\n");
	if (check_columns_up(board, size, (clues + (size * 0))) != 0)
		return (-1);
	printf("check 2 pasa:\n");
	if (check_columns_down(board, size, (clues + (size * 1))) != 0)
		return (-1);
	printf("check 3 pasa:\n");
	if (check_rows_right(board, size, (clues + (size * 3))) != 0)
		return (-1);
	printf("check 4 pasa:\n");
	if (check_rows_left(board, size, (clues + (size * 2))) != 0)
		return (-1);
	printf("check 5 pasa:\n");
	if (ft_check_0(board, size) != 0)
		return (0);
	else
		return (1);
	return (0);
}

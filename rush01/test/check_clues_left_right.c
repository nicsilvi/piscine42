/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible_buildings.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:06:46 by smercado          #+#    #+#             */
/*   Updated: 2024/03/31 17:20:06 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_right(int *board, int size, int *clues, int row)
{
	int	col;
	int	nb_visible_cells;
	int	tallest_cell;

	col = size - 1;
	nb_visible_cells = 0;
	tallest_cell = 0;
	while (col >= 0)
	{
		if (*(board + (size * row) + col) == 0)
			return (0);
		if (*(board + (size * row) + col) > tallest_cell)
		{
			nb_visible_cells++;
			tallest_cell = *(board + (size * row) + col);
		}
		col--;
	}
	if (nb_visible_cells != *(clues + row))
		return (-1);
	return (0);
}

int	check_rows_right(int *board, int size, int *clues)
{
	int	row;

	row = 0;
	while (row < size)
	{
		if (check_row_right(board, size, clues, row) == -1)
			return (-1);
		row++;
	}
	return (0);
}

int	check_row_left(int *board, int size, int *clues, int row)
{
	int	col;
	int	nb_visible_cells;
	int	tallest_cell;

	col = 0;
	nb_visible_cells = 0;
	tallest_cell = 0;
	while (col < size)
	{
		if (*(board + (size * row) + col) == 0)
			return (0);
		if (*(board + (size * row) + col) > tallest_cell)
		{
			nb_visible_cells++;
			tallest_cell = *(board + (size * row) + col);
		}
		col++;
	}
	if (nb_visible_cells != *(clues + row))
		return (-1);
	return (0);
}

int	check_rows_left(int *board, int size, int *clues)
{
	int	row;

	row = 0;
	while (row < size)
	{
		if (check_row_left(board, size, clues, row) == -1)
			return (-1);
		row++;
	}
	return (0);
}

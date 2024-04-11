/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible_buildings.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:06:46 by smercado          #+#    #+#             */
/*   Updated: 2024/03/31 16:47:46 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col_up(int *board, int size, int *clues, int col)
{
	int	row;
	int	nb_visible_cells;
	int	tallest_cell;

	row = 0;
	nb_visible_cells = 0;
	tallest_cell = 0;
	while (row < size)
	{
		if (*(board + (size * row) + col) == 0)
			return (0);
		if (*(board + (size * row) + col) > tallest_cell)
		{
			nb_visible_cells++;
			tallest_cell = *(board + (size * row) + col);
		}
		row++;
	}
	if (nb_visible_cells != *(clues + col))
		return (-1);
	return (0);
}

int	check_columns_up(int *board, int size, int *clues)
{
	int	row;
	int	col;
	int	clue_check;

	col = 0;
	while (col < size)
	{
		if (check_col_up(board, size, clues, col) == -1)
			return (-1);
		col++;
	}
	return (0);
}

int	check_col_down(int *board, int size, int *clues, int col)
{
	int	row;
	int	nb_visible_cells;
	int	tallest_cell;

	row = size - 1;
	nb_visible_cells = 0;
	tallest_cell = 0;
	while (row >= 0)
	{
		if (*(board + (size * row) + col) == 0)
			return (0);
		if (*(board + (size * row) + col) > tallest_cell)
		{
			nb_visible_cells++;
			tallest_cell = *(board + (size * row) + col);
		}
		row--;
	}
	if (nb_visible_cells != *(clues + col))
		return (-1);
	return (0);
}

int	check_columns_down(int *board, int size, int *clues)
{
	int	row;
	int	col;
	int	clue_check;

	col = 0;
	while (col < size)
	{
		if (check_col_down(board, size, clues, col) == -1)
			return (-1);
		col++;
	}
	return (0);
}

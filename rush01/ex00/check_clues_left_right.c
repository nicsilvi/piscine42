/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible_buildings.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:06:46 by smercado          #+#    #+#             */
/*   Updated: 2024/03/31 13:57:10 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_right(int board[9][9], int size, int clues[9], int row)
{
	int	col;
	int	nb_visible_cells;
	int	tallest_cell;

	col = size - 1;
	nb_visible_cells = 0;
	tallest_cell = 0;
	while (col >= 0)
	{
		if (board[row][col] == 0)
			return (0);
		if (board[row][col] > talest_cell)
		{
			nb_visible_cells++;
			tallest_cell = board[row][col];
		}
		col--;
	}
	if (nb_visible_cells != clues[row])
		return (-1);
	return (0);
}

int	check_rows_right(int board[9][9], int size, int clues[9])
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

int	check_row_left(int board[9][9], int size, int clues[9], int row)
{
	int	col;
	int	nb_visible_cells;
	int	tallest_cell;

	col = 0;
	nb_visible_cells = 0;
	tallest_cell = 0;
	while (col < size)
	{
		if (board[row][col] == 0)
			return (0);
		if (board[row][col] > tallest_cell)
		{
			nb_visible_cells++;
			tallest_cell = board[row][col];
		}
		col++;
	}
	if (nb_visible_cells != clues[row])
		return (-1);
	return (0);
}

int	check_rows_left(int board[9][9], int size, int clues[9])
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

/*
int check_row_left(int board[9][9], int size, int clues[9], int row)
{
	int col;
	int nb_visible_cell;
	int talest_cell;

	col = 0;
	nb_visible_cell = 0;c
	talest_cell = 0;
	while (col < size)
	{
		if (board[row][col] > talest_cell)
		{
			nb_visible_cells++;
			talest_cell = board[row][col];
		}
		col++;
	}
	if (visible_cell != clues[col])
		return -1;
	return 0;
}

int check_rows_left(int board[9][9], int size, int clues[9])
{
	int row;

	row = 0;
	while (row < size)
	{
		if (check_row_left(board, size, clues, row) == -1)
			return -1;
		row++;
	}
	return 0;
}

/*
int check_row_left(int board[9][9], int size, int clues[9], int row)
{
	int col;
	int nb_visible_cell;
	int talest_cell;

	col = 0;
	nb_visible_cell = 0;
	talest_cell = 0;
	while (col < size)
	{
		if (board[row][col] > talest_cell)
		{
			nb_visible_cells++;
			talest_cell = board[row][col];
		}
		col++;
	}
	if (visible_cell != clues[col])
		return -1;
	return 0;
}

int check_rows_left(int board[9][9], int size, int clues[9])
{
	int row;

	row = 0;
	while (row < size)
	{
		if (check_row_left(board, size, clues, row) == -1)
			return -1;
		row++;
	}
	return 0;
}

/*
int check_row_left(int board[9][9], int size, int clues[9], int row)
{
	int col;
	int nb_visible_cell;
	int talest_cell;

	col = 0;
	nb_visible_cell = 0;
	talest_cell = 0;
	while (col < size)
	{
		if (board[row][col] > talest_cell)
		{
			nb_visible_cells++;
			talest_cell = board[row][col];
		}
		col++;
	}
	if (visible_cell != clues[col])
		return -1;
	return 0;
}

int check_rows_left(int board[9][9], int size, int clues[9])
{
	int row;

	row = 0;
	while (row < size)
	{
		if (check_row_left(board, size, clues, row) == -1)
			return -1;
		row++;
	}
	return 0;
}

/*
int check_row_left(int board[9][9], int size, int clues[9], int row)
{
	int col;
	int nb_visible_cell;
	int talest_cell;

	col = 0;
	nb_visible_cell = 0;
	talest_cell = 0;
	while (col < size)
	{
		if (board[row][col] > talest_cell)
		{
			nb_visible_cells++;
			talest_cell = board[row][col];
		}
		col++;
	}
	if (visible_cell != clues[col])
		return -1;
	return 0;
}

int check_rows_left(int board[9][9], int size, int clues[9])
{
	int row;

	row = 0;
	while (row < size)
	{
		if (check_row_left(board, size, clues, row) == -1)
			return -1;
		row++;
	}
	return 0;
}

/*
int check_row_left(int board[9][9], int size, int clues[9], int row)
{
	int col;
	int nb_visible_cell;
	int talest_cell;

	col = 0;
	nb_visible_cell = 0;
	talest_cell = 0;
	while (col < size)
	{
		if (board[row][col] > talest_cell)
		{
			nb_visible_cells++;
			talest_cell = board[row][col];
		}
		col++;
	}
	if (visible_cell != clues[col])
		return -1;
	return 0;
}

int check_rows_left(int board[9][9], int size, int clues[9])
{
	int row;

	row = 0;
	while (row < size)
	{
		if (check_row_left(board, size, clues, row) == -1)
			return -1;
		row++;
	}
	return 0;
}

/*
int check_row_left(int board[9][9], int size, int clues[9], int row)
{
	int col;
	int nb_visible_cell;
	int talest_cell;

	col = 0;
	nb_visible_cell = 0;
	talest_cell = 0;
	while (col < size)
	{
		if (board[row][col] > talest_cell)
		{
			nb_visible_cells++;
			talest_cell = board[row][col];
		}
		col++;
	}
	if (visible_cell != clues[col])
		return -1;
	return 0;
}

int check_rows_left(int board[9][9], int size, int clues[9])
{
	int row;

	row = 0;
	while (row < size)
	{
		if (check_row_left(board, size, clues, row) == -1)
			return -1;
		row++;
	}
	return 0;
}

/*
int	check_colup(int interior[4][4], int exterior[4][4],
	int max_height, int visible_buildings)
{
	int	i;
	int	j;
	int	k;

	k = -1;
	while (k++ < 4)
	{
		i = -1;
		while (i++ < 4)
		{
			j = 0;
			while (j < 4)
			{
				if (interior[j][i] > max_height)
				{
					max_height = interior[j][i];
					visible_buildings++;
				}
				j++;
			}
			if (visible_buildings != exterior[0][k])
				return (1);
		}
	}
}

int	check_coldown(int interior, int exterior,
	int max_height, int visible_buildings)
{
	int	i;
	int	j;
	int	k;

	k = -1;
	while (k++ < 4)
	{
		i = -1;
		while (i++ < 4)
		{
			j = 3;
			while (j >= 0)
			{
				if (interior[j][i] > max_height)
				{
					max_height = interior[j][i];
					visible_buildings++;
				}
				j--;
			}
			if (visible_buildings != exterior[1][k])
				return (1);
		}
	}
}

int	check_rowright(int interior, int exterior,
	int max_height, int visible_buildings)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	while (k < 4)
	{
		i = -1;
		while (i++ < 4)
		{
			j = 3;
			while (j >= 0)
			{
				if (interior[i][j] > max_height)
				{
					max_height = interior[i][j];
					visible_buildings++;
				}
				j--;
			}
            if (visible_buildings != exterior[3][k])
                return (1);
        }
    }
}

*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visible_buildings.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:06:46 by smercado          #+#    #+#             */
/*   Updated: 2024/03/31 08:39:58 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int check_col_up(int board[9][9], int size, int clues[9], int col)
{
	int row;
	int nb_visible_cell;
	int talest_cell;

	row = 0;
	nb_visible_cell = 0;
	talest_cell = 0;
	while (row < size)
	{
		if (board[col][row] > talest_cell)
		{
			nb_visible_cells++;
			talest_cell = board[col][row];
		}
		row++;
	}
	if (visible_cell != clues[col])
		return -1;
	return 0;
}

int check_colums_up(int board[9][9], int size, int clues[9])
{
	int row;
	int col;
	int clue_check;

	col = 0;
	while (col < size)
	{
		if (check_col_up(board, size, clues, col) == -1)
			return -1;
		col++;
	}
	return 0;
}

int check_col_down(int board[9][9], int size, int clues[9], int col)
{
	int row;
	int nb_visible_cell;
	int talest_cell;

	row = size - 1;
	nb_visible_cell = 0;
	talest_cell = 0;
	while (row >= 0)
	{
		if (board[col][row] > talest_cell)
		{
			nb_visible_cells++;
			talest_cell = board[col][row];
		}
		row++;
	}
	if (visible_cell != clues[col])
		return -1;
	return 0;
}

int check_colums_down(int board[9][9], int size, int clues[9])
{
	int row;
	int col;
	int clue_check;

	col = 0;
	while (col < size)
	{
		if (check_col_up(board, size, clues, col) == -1)
			return -1;
		col++;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:12:42 by smercado          #+#    #+#             */
/*   Updated: 2024/03/31 13:58:20 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_0(int board[9][9], int size)
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
			if (board[row][col] == 0)
			{
				return (-1);
			}
			col++;
		}
		row++;
	}
	return (0);
}

int	ft_checks(int board[9][9], int clues[9][9], int size)
{
	if (ft_check_0(board, size) != 0)
		return (-1);
	if (check_repeating_nb(board, size) != 0)
		return (-1);
	if (check_columns_up(board, size, clues) != 0)
		return (-1);
	if (check_columns_down(board, size, clues) != 0)
		return (-1);
	if (check_rows_right(board, size, clues) != 0)
		return (-1);
	if (check_rows_left(board, size, clues) != 0)
		return (-1);
	return (0);
}

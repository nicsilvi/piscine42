/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_repeating_numbers.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 07:10:08 by tatahere          #+#    #+#             */
/*   Updated: 2024/03/31 17:05:05 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	nb_counter_row(int *board, int size, int row, int nb_tested)
{
	int	occurrences;
	int	col;

	occurrences = 0;
	col = 0;
	while (col < size)
	{
		if (*(board + (size * row) + col) == nb_tested)
			occurrences++;
		col++;
	}
	return (occurrences);
}

int	check_numbers_row(int *board, int size)
{
	int	row;
	int	col;
	int	nb_tested;
	int	occurrences;

	row = 0;
	while (row < size)
	{
		nb_tested = 1;
		while (nb_tested <= size)	
		{
			occurrences = nb_counter_row(board, size, row, nb_tested);
			nb_tested++;
			if (occurrences > 1)
				return (-1);
		}
		row++;
	}
	return (0);
}

int	nb_counter_col(int *board, int size, int col, int nb_tested)
{
	int	occurrences;
	int	row;

	occurrences = 0;
	row = 0;
	while (row < size)
	{
		if (*(board + (size * row) + col) == nb_tested)
			occurrences++;
		row++;
	}
	return (occurrences);
}

int	check_numbers_col(int *board, int size)
{
	int	row;
	int	col;
	int	nb_tested;
	int	occurrences;

	col = 0;
	while (col < size)
	{
		nb_tested = 1;
		while (nb_tested <= size)
		{
			occurrences = nb_counter_col(board, size, col, nb_tested);
			nb_tested++;
			if (occurrences > 1)
				return (-1);
		}
		col++;
	}
	return (0);
}

int	check_repeating_nb(int *board, int size)
{
	if (check_numbers_col(board, size) == -1)
		return (-1);
	if (check_numbers_row(board, size) == -1)
		return (-1);
	return (0);
}

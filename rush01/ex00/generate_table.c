/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 11:24:17 by tatahere          #+#    #+#             */
/*   Updated: 2024/03/31 18:30:51 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	print_table(int board[9][9], int side_size);


int *try_cell(int board[9][9], int size, int clues[4][9])
{
	int *new_boards;
	
	new_boards = (int (*)[size][9][9])malloc(size * 9 * 9 * sizeof(int));
	
}


int	gen_table(int clues[4][9], int size)
{
	int board[9][9];
}

int copy(int *dest, int *src, int size)
{
	int	i;

	i = 0;
	while (i < (size * size))
	{
		 *(empty + i  = *(full + i);
		 col++;
	 }
	 i++;
}

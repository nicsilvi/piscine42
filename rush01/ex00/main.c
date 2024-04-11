/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 09:05:45 by smercado          #+#    #+#             */
/*   Updated: 2024/03/31 18:28:08 by emmalons         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

void	ft_format_clues(char *str, int *clues, int size);
int		input_validation(char *str);
int		ft_check_length(int i);
void	ft_error(void);

int	main(int argc, char **argv)
{
	int	size;
	int	*clues;

	if (argc != 2)
	{
		ft_error();
		return (-1);
	}
	size = input_validation(argv[1]);
	if (size == -1)
	{
		ft_error();
		return (-1);
	}
	clues = (int *)malloc(4 * size * sizeof(int));
	ft_format_clues(argv[1], clues, size);
	return (0);
}

void	ft_error(void)
{
	write(1, "Error\n", 6);
}

// comprobar entrada (rango correcto 16 nums y 15 espacios)
int	input_validation(char *str)
{
	int	size;
	int	i;

	i = 0;
	if (!(str[0] >= '1' && str[0] <= '4'))
		return (-1);
	i++;
	while (str[i] != '\0')
	{
		if (!(str[i + 1] >= '1' && str[i + 1] <= '4' && str[i] == ' '))
			return (-1);
		i = i + 2;
	}
	size = ft_check_length(i);
	return (size);
}

// ft que crea un array int[4][4]
void	ft_format_clues(char	*str, int *clues, int size)
{
	int	col;
	int	row;
	int	i;

	i = 0;
	row = 0;
	col = 0;
	while (row < 4)
	{
		col = 0;
		while (col < size)
		{
			*(clues + (size * row) + col) = str[i] - '0';
			col++;
			if (col == 4 && row == 3)
				i++;
			else
				i = i + 2;
		}
		row++;
	}
}

int	ft_check_length(int i)
{
	if (((i + 1) / 2) % 4 == 0)
		return (((i + 1) / 2) / 4);
	else
		return (-1);
}

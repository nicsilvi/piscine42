/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 09:05:45 by smercado          #+#    #+#             */
/*   Updated: 2024/03/31 14:49:55 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	size;

	i = 0;
	if (arg != 2)
	{
		ft_error();
		return (-1);
	}
	size = ft_comprobar_entrada(argv[1], i);
	ft_format_clues(argv[1], i);
	gene
	return (0);
}

void	ft_error(void)
{
	write(1, "Error", 5);
}

// comprobar entrada (rango correcto16 nums y 15 espacios)
int	ft_comprobar_entrada(char *str)
{
	if (str[0] >= '1' && str[0] <= '4')
	{
		i++;
		while (str[i] != '\0')
		{
			if (str[i + 1] >= '1' && str[i + 1] <= '4' && str[i] == ' ')
			{
				i = i + 2;
			}
			else
			{
				ft_error();
				return (-1);
			}
		}
		ft_check_length(i);
	}
	else
	{
		ft_error();
		return (-1);
	}
}

// ft que crea un array int[4][4]
int	*ft_format_clues(char	*str, int i)
{
	int	clues[4][4];
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		while (j < 4)
		{
			k = 0;
			while (k < 4)
			{
				clues[j][k] = str[i] - '0';
				k++;
				if (k == 4 && j == 3)
					i++;
				else
					i = i + 2;
			}
			j++;
		}
	}
	return ((int *)clues);
}

int	ft_check_length(int i)
{
	if (i == 31)
		return (4);
	else
	{
		ft_error();
		return (-1);
	}
}

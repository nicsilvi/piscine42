/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:26:48 by smercado          #+#    #+#             */
/*   Updated: 2024/03/24 11:46:16 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_error(void)
{
	write(1, "error, vuelve a intentarlo", 26);
}
/* esquina sup izq; dentro vertical y horizontal; esquin inf izq
 */

void	ft_vertical_inicio(int j, int y, int i, int x)
{
	if (j == 1)
	{
		ft_putchar('A');
	}
	if (j != 1 && j != y)
	{
		ft_putchar('B');
	}
	if (j == y && i != x && j != 1)
	{
		ft_putchar('C');
	}
}
/* linea inferior horizontal; dentro horizontal;
 esquina sup derecha; medio final; espacios interiores; esquina inf derecha
 */

void	ft_horizontal_esquinas(int i, int j, int y, int x)
{
	if ((i > 1 && i != x && j == y) || (i != 1 && i != x && j == 1))
	{
		ft_putchar('B');
	}
	if (j == 1 && i == x)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	if (i == x && j != y && j != 1)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
	if (i != 1 && i != x && j != y && j != 1)
	{
		ft_putchar(' ');
	}
	if (i == x && j == y && y != 1)
	{
		ft_putchar('C');
	}
}

void	ft_bucles(int x, int y)
{
	int	i;
	int	j;

	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if (i == 1 && i != x)
			{
				ft_vertical_inicio(j, y, i, x);
			}
			else
			{
				ft_horizontal_esquinas(i, j, y, x);
			}
			i++;
		}
		j++;
	}
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		ft_error();
	}
	else
	{
		ft_bucles(x, y);
	}
}

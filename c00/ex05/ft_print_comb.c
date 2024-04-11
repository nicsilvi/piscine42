/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 12:42:04 by smercado          #+#    #+#             */
/*   Updated: 2024/03/22 11:56:22 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	call_write(char i, char j, char k);
void	ft_whiles(char i, char j, char k);

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	j = '0';
	k = '0';
	ft_whiles(i, j, k);
}

void	call_write(char i, char j, char k)
{
	if (i != j && j != k && k != i)
	{
		write (1, &i, 1);
		write (1, &j, 1);
		write (1, &k, 1);
		write (1, ", ", 2);
	}
}

void	ft_whiles(char i, char j, char k)
{
	while (i <= '7')
	{
		j = i + 1;
		while
			(j <= '8')
			{
				k = j + 1 ;
		while (k <= '9')
		{
			if (i == '7' && j == '8' && k == '9')
			{
				write (1, "789", 3);
				return ;
			}
			else
			{
				call_write(i, j, k);
				k++;
			}
		}
		j++;
	}
	i++;
}
}

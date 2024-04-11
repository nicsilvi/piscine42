/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   condiciones.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:01:32 by smercado          #+#    #+#             */
/*   Updated: 2024/03/31 07:09:21 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_conditions();
{
	ft_line_diff();
	ft_column_diff();


}

int	ft_line_diff(int **table);
{
	int	j;
	int	k;
	int	i;

	i = 0;
    while (i < 4) 
	{
        j = 0;
        while (j < 4)
	   	{
            k = j + 1;
            while (k < 4)
		   	{
                if (table[i][j] == table[i][k])
			   	{
                    return 0;
                }
                k++;
            }
            j++;
        }
        i++;
    }
}

int	ft_column_diff(int **table)
{
	int	j;
	int	k;
	int	i;

    j = 0;
    while (j < 4)
   	{
        i = 0;
        while (i < 4)
	   	{
            k = i + 1;
            while (k < 4) 
			{
                if (table[i][j] == table[k][j]) 
				{
                    return 0;
                }
                k++;
            }
            i++;
        }
        j++;
    }
}

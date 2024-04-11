/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_spaces.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:44:33 by smercado          #+#    #+#             */
/*   Updated: 2024/04/10 13:18:24 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compare_sqare(int cols, int obstacle, int lines, char **array)
{
	int	first_square;
	int	second_sqare;

	first_square = ft_count_first_sqare(array, lines, cols, obstacle);
	second_square = ft_count_second_sqare(array, lines, cols, obstacle);

	if (first_square > second_sqare)
		return (first_square);
	else
		return (second_square);
}


void	ft_count_second_sqare(char **array, int lines, int cols, char obstacle)
{
	int	max_i;
	int	max_j;
	int	count;
	int	i;
	int	j;

	i = 0;
	max_i = 0;
	max_j = 0;
	while (i < lines)
    {
		j = 0;
		while (array[i][j] != 'o' && array[i][j] != '\0')
		j++;
		while (j < cols)
		{
			while (array[i][j] != 'o' && array[i][j] != '\0')
			{
				max_j++;
				j++;
			}
			while (array[i][j - max_size] != 'o' && array[i][j - max_size] != '\0')
			{
				i++;
				max_i++;
			}
			count = max_j * max_i;
			return (count);
		}
	}
}

void    ft_count_first_sqare(char **array, int lines, int cols, char obstacle)
{
    int max_i;
    int max_j;
    int count;
    int i;
    int j;

    i = 0;
    max_j = 0;
	max_i = 0;
    while (i < lines)
    {
        j = 0;
        while (j < cols)
        {
            while (array[i][j] != 'o' && array[i][j] != '\0')
            {
                max_j++;
                j++;
            }
            while (array[i][j - max_size] != 'o' && array[i][j - max_size] != '\0')
            {
                i++;
                max_i++;
            }
            count = max_j * max_i;
            return (count);
        }
    }
}

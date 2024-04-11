/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:06:39 by smercado          #+#    #+#             */
/*   Updated: 2024/04/10 16:11:42 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (min - max));
	if (array == NULL)
		return (-1);
	else
	{
		array[i] = min;
		i++;
		min++;
	}
	return (*array);
}

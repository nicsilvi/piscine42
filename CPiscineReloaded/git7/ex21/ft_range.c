/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:31:12 by smercado          #+#    #+#             */
/*   Updated: 2024/06/10 17:28:35 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *) malloc((max - min) * sizeof(int));
	if (!array)
		return (NULL);
	else
	{
		while (min < max)
		{
			array[i] = min;
			i++;
			min++;
		}
	}
	return (array);
}

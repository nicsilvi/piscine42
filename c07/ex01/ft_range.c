/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:54:55 by smercado          #+#    #+#             */
/*   Updated: 2024/04/08 16:06:13 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*mem;

	i = 0;
	if (min >= max)
		return (NULL);
	mem = (int *)malloc((max - min) * sizeof(int));
	if (mem == NULL)
		return (NULL);
	else
	{
		while (min < max)
		{
			mem[i] = min;
			i++;
			min++;
		}
	}
	return (mem);
}

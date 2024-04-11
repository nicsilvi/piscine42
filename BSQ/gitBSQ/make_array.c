/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:12:59 by smercado          #+#    #+#             */
/*   Updated: 2024/04/10 16:48:21 by mroman-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_counters(char *buf, int *lines, int *cols)
{
	int	i;

	i = 0;
	while (buf[i] != '\n')
		i++;
	i++;
	while (buf[i] != '\n')
	{
		cols++;
		i++;
	}
	i = 0;
	while (buf[i] > '0' && buf[i] < '9')
	{
		*lines = *lines * 10 + (buf[i] - '0');
		i++;
	}
}

char	**ft_make_array(int lines, int cols)
{
	char	**array;
	int		k;

	k = 0;
	array = malloc(lines *sizeof(char *));
	if (array == NULL)
	{
		write(1, "error malloc", 12);
		exit(EXIT_FAILURE);
	}
	while (k < lines)
	{
		array[k] = malloc((cols + 1) *sizeof(char));
		if (array[k] == NULL)
		{
			write(1, "error malloc", 12);
			exit(EXIT_FAILURE);
		}
		k++;
	}
	return (array);
}

char	**ft_change_bidimension(char **array, char *buf, int lines)
{
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	j = 0;
	while (buf[k] != '\n')
		k++;
	k++;
	while (buf[k] != '\0' && j < lines)
	{
		if (buf[k] == '\n')
		{
			array[j][i] = '\0';
			j++;
			i = 0;
		}
		else
		{
			array[j][i] = buf[k];
			i++;
		}
		k++;
	}
	return (array);
}

char	**ft_call_make_array(char *buf)
{
	int		lines;
	int		cols;
	char	**array;

	lines = 0;
	cols = 0;
	ft_counters(buf, &lines, &cols);
	array = ft_make_array(lines, cols);
	ft_change_bidimension(array, buf, lines);
	return (array);
}

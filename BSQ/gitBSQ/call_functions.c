/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:17:12 by smercado          #+#    #+#             */
/*   Updated: 2024/04/10 16:42:36 by mroman-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char	ft_get_info_obstacle(char *buf)
{
	char	obstacle;
	int		i;

	i = 0;
	while (buf[i] != '\n')
		i++;
	obstacle = buf[i - 2];
	return (obstacle);
}

int	ft_get_info_lines(char *buf)
{
	int	i;
	int	lines;

	i = 0;
	lines = 0;
	while (buf[i] != '\n')
		i++;
	while ((i - 3) > 0)
		lines = lines * 10 + (buf[i - 3] - '0');
	return (lines);
}

int	ft_get_info_cols(char *buf)
{
	int	i;
	int	cols;

	cols = 0;
	i = 0;
	while (buf[i] != '\n')
		i++;
	i++;
	while (buf[i] != '\n')
	{
		cols++;
		i++;
	}
	return (cols);
}

void	ft_call_functions(char *argv)
{
	char	*buf;
	char	**array;

	buf = ft_readfile(argv);
	if (analisis(buf) != 0)
		return ;
	else
	{
		array = ft_call_make_array(buf);
	}
}

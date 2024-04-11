/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lines.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:44:03 by mroman-j          #+#    #+#             */
/*   Updated: 2024/04/10 16:18:33 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	count_newline(char *buff)
{
	int	newline;
	int	p;

	p = 0;
	newline = -1;
	while (buff[p] != '\0')
	{
		if (buff[p] == '\n')
			newline++;
		p++;
	}
	return (newline);
}

int	find_first_line(char *buff)
{
	int	p;
	int	newline;

	p = 0;
	newline = 0;
	while (buff[p] != '\0' && newline < 1)
	{
		if (buff[p] == '\n')
			newline++;
		p++;
	}
	return (p);
}

int	check_line_lengths(char *buff, int first_line)
{
	int	prev_line;
	int	same_len;
	int	len;
	int	p;

	prev_line = -1;
	same_len = 0;
	len = 0;
	p = first_line;
	while (buff[p] != '\0')
	{
		if (buff[p] == '\n')
		{
			if (prev_line != -1)
			{
				if (len - prev_line != same_len)
					return (0);
			}
			prev_line = len;
			len = -1;
		}
		len++;
		p++;
	}
	return (1);
}

int	are_lengths_equal(char *buff)
{
	int	first_line;

	first_line = find_first_line(buff);
	return (check_line_lengths(buff, first_line));
}

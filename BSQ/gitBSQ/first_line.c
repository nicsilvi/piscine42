/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:47:19 by mroman-j          #+#    #+#             */
/*   Updated: 2024/04/10 16:36:48 by mroman-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	find_char(char *buff, char c)
{
	int	p;

	p = 4;
	while (buff[p] != '\0')
	{
		if (buff[p] == c)
			return (1);
		p++;
	}
	return (0);
}

int	is_first_line_valid(char *buff)
{
	int		expected_lines;
	char	vacio;
	char	obstaculo;
	char	lleno;
	int		p;

	p = 0;
	if (buff[p] >= '0' && buff[p] <= '9')
	{
		expected_lines = buff[p] - '0';
		p++;
	}
	if (buff[p] >= '0' && buff[p] <= '9')
	{
		expected_lines = expected_lines * 10 + (buff[p] - '0');
		p++;
	}
	vacio = buff[p];
	obstaculo = buff[++p];
	lleno = buff[++p];
	if (expected_lines > 0 && find_char(buff, vacio)
		&& find_char(buff, obstaculo))
		return (1);
	return (0);
}

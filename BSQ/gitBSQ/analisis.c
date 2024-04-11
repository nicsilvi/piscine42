/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   analisis.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mroman-j <mroman-j@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:49:38 by mroman-j          #+#    #+#             */
/*   Updated: 2024/04/10 16:35:59 by mroman-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	analisis(char *buff)
{
	int		newlines;
	int		first_line_valid;
	int		same_len;
	char	vacio;
	char	obstaculo;

	newlines = count_newline(buff);
	first_line_valid = is_first_line_valid(buff);
	same_len = are_lengths_equal(buff);
	vacio = *(buff + 1);
	obstaculo = *(buff + 2);
	if (first_line_valid == 0)
		return (1);
	else if (newlines != (*buff - '0'))
		return (1);
	else if (!same_len)
		return (1);
	else
		return (0);
}

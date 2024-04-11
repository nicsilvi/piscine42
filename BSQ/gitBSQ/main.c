/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:04:34 by smercado          #+#    #+#             */
/*   Updated: 2024/04/10 16:45:36 by mroman-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_counter_file(char *file)
{
	int		counter;
	char	caracter;
	int		fd;

	counter = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (read(fd, &caracter, 1) == 1)
		counter++;
	close(fd);
	return (counter);
}

char	*ft_readfile(char *filename)
{
	int		i;
	int		fd;
	char	*buf;
	int		buf_size;

	i = 0;
	buf_size = ft_counter_file(filename);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_error();
		return (0);
	}
	else
	{
		buf = malloc(buf_size * sizeof(char));
		if (buf == NULL)
			return (NULL);
		else
		{
			while (read(fd, &buf[i], 1) == 1)
				i++;
			buf[i] = '\0';
		}
	}
	close(fd);
	return (buf);
}

void	ft_error(void)
{
	write(1, "error\n", 6);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 2;
	if (argc < 2)
	{
		write(1, "few arguments\n", 14);
		return (-1);
	}
	else
	{
		while (argc > 1)
		{
			ft_call_functions(argv[i]);
			i++;
			argc--;
		}
	}
	return (0);
}

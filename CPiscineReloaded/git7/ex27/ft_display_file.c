/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:21:14 by smercado          #+#    #+#             */
/*   Updated: 2024/06/11 17:21:26 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char e)
{
	write(1, &e, 1);
}

void	ft_read(char *file)
{
	int		fd;
	char	caracter;

	fd = open(file, O_RDONLY);
	if (fd == -1)
		write (2, "Cannot read file.\n", 18);
	while (read(fd, &caracter, 1) == 1)
		ft_putchar(caracter);
	close (fd);
}

int	main(int argc, char **argv)
{
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else if (argc < 2)
		write (2, "File name missing.\n", 19);
	else
		ft_read(argv[1]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:27:16 by smercado          #+#    #+#             */
/*   Updated: 2024/04/04 08:19:19 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	aux;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			aux = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (aux);
}
/*
int	main()
{
	char	*str;
	int 	result;

	str = "Hola que tal";
	result = ft_str_is_alpha(str);
	return (result);
}*/

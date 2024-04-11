/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:19:24 by smercado          #+#    #+#             */
/*   Updated: 2024/04/08 15:54:27 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*mem;

	i = 0;
	len = ft_strlen(src);
	if (!(mem = malloc((len + 1)*sizeof(char))))
		return (NULL);
	else
	{
		while (i < len)
		{
			mem[i] = src[i];
			i++;
		}
		mem[i] = '\0';
		return (mem);
	}

}

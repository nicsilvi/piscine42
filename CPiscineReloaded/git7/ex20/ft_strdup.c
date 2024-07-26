/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:25:00 by smercado          #+#    #+#             */
/*   Updated: 2024/06/10 17:28:00 by smercado         ###   ########.fr       */
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
	int		i;
	int		len;
	char	*mem;

	i = 0;
	len = ft_strlen(src);
	mem = malloc((len + 1) * sizeof(char));
	if (!mem)
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

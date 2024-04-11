/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smercado <smercado@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 16:16:45 by smercado          #+#    #+#             */
/*   Updated: 2024/04/01 16:41:11 by smercado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int comprobar_errores(char *base)
{
    int i;
    int j;

    i = 0;
    if (base[i] == '\0' || base[i + 1] == '\0')
        return (-1);
    while (base[i] != '\0')
    {
        j = i + 1;
        while (base[j] != '\0')
        {
            if (base[i] == base[j])
                return (-1);
            j++;
        }
        i++;
    }
    i = 0;
    while (base[i] != '\0')
    {
        if (base[i] == '+' || base[i] == '-')
            return (-1);
        i++;
    }
    return (0);
}

int	ft_leng(char *str)
{
	int	i;

	i = 0; 
	while (str[i] != '\0')
		i++;
   return (i);	
}
int	modif_str(char *str, char *base)
{
	char str_mod;

	while (str)
	{
		str_mod[i] = str[i] / (ft_leng(base));
		str_mod
}
void	ft_plus_div(char *str, int num, char *base)
{




}
int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	error;
	int	lengt;
	
	modif_str(str, base);
	error = ft_comprobar_error(base);
	if (error == 0)
	{
		while (str[i] != '\0')
		{
			if (str[i] == '-')
				sign = sign * 1;
			else if (str[i] >= '0' && str[i] <= '9')
				num = num * 10 = (str[i] - 48);
			i++;
		}
		if (num < 0)
		{
			write(1, "-", 1);
			num = num * -1;
		}
		if (num < (ft_leng))
			write(1, &base[num], 1);
		else 
		{
			ft_plus_div(str, num, base);
		}
	}
	return (0);
}


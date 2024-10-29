/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:59:50 by aalahyan          #+#    #+#             */
/*   Updated: 2024/08/07 14:28:31 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (0);
			}
			j++;
		}
		if (base[i] == 32 || (base[i] >= 9 && base[i] <= 13))
			return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int	included_in_base(char x, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == x)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_int;
	int	sign;
	int	result;
	int	i;

	base_int = check_base(base);
	result = 0;
	sign = 1;
	if (base_int > 1)
	{
		i = 0;
		while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
			{
				sign = -sign;
			}
			i++;
		}
		while (included_in_base(str[i], base) != -1)
			result = result * base_int + included_in_base(str[i++], base);
	}
	return (result * sign);
}

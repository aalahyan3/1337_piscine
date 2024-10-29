/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 09:30:46 by aalahyan          #+#    #+#             */
/*   Updated: 2024/08/11 20:08:59 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*putnbr_base(int nb, char *base, int base_int);
int		get_size_needed(int n, int base_int);

int	check_and_count(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			return (0);
		if (str[i] == '=' || str[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

int	get_index(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	atoi_base(char *str, char *base, int base_int)
{
	int	i;
	int	index;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (get_index(str[i], base) != -1)
	{
		index = get_index(str[i], base);
		result = result * base_int + index;
		i++;
	}
	return (result * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		from_int;
	int		to_int;
	int		integer;
	char	*new_nbr;

	from_int = check_and_count(base_from);
	to_int = check_and_count(base_to);
	if (from_int > 1 && to_int > 1)
	{
		integer = atoi_base(nbr, base_from, from_int);
		new_nbr = putnbr_base(integer, base_to, to_int);
		return (new_nbr);
	}
	return (NULL);
}

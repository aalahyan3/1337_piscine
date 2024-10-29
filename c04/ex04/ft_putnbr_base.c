/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:23:35 by aalahyan          #+#    #+#             */
/*   Updated: 2024/08/07 14:24:46 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
			if (str[i] == str[j])
				return (0);
			j++;
		}
		if (str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_int;
	char	arr[50];
	int		i;
	long	long_nb;

	base_int = check_and_count(base);
	long_nb = nbr;
	if (base_int > 1)
	{
		i = 0;
		if (long_nb < 0)
		{
			write(1, "-", 1);
			long_nb = -long_nb;
		}
		if (nbr == 0)
			write(1, &base[0], 1);
		while (long_nb)
		{
			arr[i++] = base[long_nb % base_int];
			long_nb /= base_int;
		}
		while (i--)
			write(1, &arr[i], 1);
	}
}

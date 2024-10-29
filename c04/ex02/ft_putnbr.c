/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:00:21 by aalahyan          #+#    #+#             */
/*   Updated: 2024/08/04 11:01:24 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_digits(int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	power_of(int a, int b)
{
	int	res;

	res = 1;
	while (b != 0)
	{
		res = res * a;
		b--;
	}
	return (res);
}

void	ft_putnbr(int nb)
{
	int		digits;
	int		digit;
	int		power_val;
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	digits = count_digits(nb);
	power_val = power_of(10, digits - 1);
	while (power_val != 0)
	{
		digit = (nb / power_val) % 10;
		c = digit + '0';
		write(1, &c, 1);
		power_val = power_val / 10;
	}
}

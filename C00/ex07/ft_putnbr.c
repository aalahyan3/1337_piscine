/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:37:22 by aalahyan          #+#    #+#             */
/*   Updated: 2024/07/25 16:38:36 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	count_digits(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
	{
		return (1);
	}
	else
	{
		while (nb != 0)
		{
			nb = nb / 10;
			i++;
		}
	}
	return (i);
}

int	power(int a, int b)
{
	int	result;

	result = 1;
	while (b > 0)
	{
		result = result * a;
		b--;
	}
	return (result);
}

void	ft_putnbr(int nb)
{
	int	power_val;
	int	digits;
	int	digit;

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
	power_val = power(10, digits - 1);
	while (power_val != 0)
	{
		digit = ((nb / power_val) % 10);
		ft_putchar(digit + '0');
		power_val = power_val / 10;
	}
}

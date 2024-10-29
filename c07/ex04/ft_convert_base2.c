/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:31:33 by aalahyan          #+#    #+#             */
/*   Updated: 2024/08/11 20:07:08 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_size_needed(int n, int base_int)
{
	int	size;

	size = 0;
	if (n == 0)
		size = 1;
	if (n < 0)
		size++;
	while (n)
	{
		size++;
		n /= base_int;
	}
	return (size + 1);
}

char	*putnbr_base(int nb, char *base, int base_int)
{
	char	*arr;
	int		i;
	long	nbr;
	int		index;

	nbr = nb;
	arr = (char *)malloc(get_size_needed(nbr, base_int));
	if (nbr == 0)
		arr[0] = base[0];
	index = 0;
	if (nbr < 0)
	{
		arr[0] = '-';
		nbr = -nbr;
		index = 1;
	}
	i = get_size_needed(nb, base_int) - 2;
	while (i >= index)
	{
		arr[i] = base[nbr % base_int];
		nbr /= base_int;
		i--;
	}
	arr[get_size_needed(nb, base_int) - 1] = '\0';
	return (arr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:15:20 by aalahyan          #+#    #+#             */
/*   Updated: 2024/08/07 15:19:10 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char *av[])
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = ac - 1;
		while (i > 0)
		{
			j = 0;
			while (av[i][j])
				write(1, &av[i][j++], 1);
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}

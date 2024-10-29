/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 21:21:48 by aalahyan          #+#    #+#             */
/*   Updated: 2024/08/12 10:45:03 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size_needed;
	int	i;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size_needed = max - min;
	tab = (int *)malloc(sizeof(int) * size_needed);
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size_needed)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size_needed);
}
/*
int main()
{
	int *range;
	int size = ft_ultimate_range(&range, 8, 18);
	printf("%d\n", size);
	int i = 0;
	while (i < 100)
	{
		printf("%d, ", range[i]);
		i++;
	}
	free(range);
	range = NULL;
}*/

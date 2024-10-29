/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:36:22 by aalahyan          #+#    #+#             */
/*   Updated: 2024/08/11 20:11:33 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size_needed;
	int	*tab;

	if (min >= max)
		return (NULL);
	size_needed = max - min;
	tab = (int *)malloc(sizeof(int) * size_needed);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size_needed)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 10:50:16 by aalahyan          #+#    #+#             */
/*   Updated: 2024/08/12 13:42:25 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_size(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	size_needed;

	i = 0;
	size_needed = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			size_needed++;
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	size_needed += i * (size - 1);
	return (size_needed);
}

void	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		size_needed;
	char	*str;

	if (size == 0)
	{
		str = malloc(1);
		*str = '\0';
		return (str);
	}
	size_needed = get_size(size, strs, sep) + 1;
	str = (char *)malloc(sizeof(char) * size_needed);
	if (!str)
		return (NULL);
	*str = '\0';
	i = 1;
	ft_strcat(str, strs[0]);
	while (i < size)
	{
		ft_strcat(str, sep);
		ft_strcat(str, strs[i++]);
	}
	return (str);
}

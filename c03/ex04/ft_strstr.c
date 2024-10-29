/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 18:41:51 by aalahyan          #+#    #+#             */
/*   Updated: 2024/07/31 22:16:26 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	itterate(char *start, char *target)
{
	int	i;

	i = 0;
	while (start[i] && target[i] && start[i] == target[i])
	{
		i++;
	}
	if (target[i] == '\0')
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	index;

	if (!*to_find)
	{
		return (str);
	}
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			index = i;
			if (itterate(str + index, to_find))
			{
				return (str + index);
			}
		}
		i++;
	}
	return (0);
}

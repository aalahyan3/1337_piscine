/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:02:43 by aalahyan          #+#    #+#             */
/*   Updated: 2024/07/29 15:42:53 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha_num(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else if ((c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}

char	capitalize(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_alpha_num(str[i]))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
			if (!is_alpha_num(str[i - 1]) || i == 0)
			{
				str[i] = capitalize(str[i]);
			}
		}
		i++;
	}
	return (str);
}

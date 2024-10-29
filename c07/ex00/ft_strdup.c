/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 18:16:34 by aalahyan          #+#    #+#             */
/*   Updated: 2024/08/11 20:11:13 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dub_string;
	int		srclen;
	int		i;

	srclen = 0;
	while (src[srclen])
		srclen++;
	dub_string = (char *)malloc(srclen + 1);
	if (!(dub_string))
		return (NULL);
	i = 0;
	while (src[i])
	{
		dub_string[i] = src[i];
		i++;
	}
	dub_string[i] = '\0';
	return (dub_string);
}

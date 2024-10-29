/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:43:33 by aalahyan          #+#    #+#             */
/*   Updated: 2024/07/31 16:47:24 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destlen;
	unsigned int	srclen;

	srclen = 0;
	while (src[srclen])
		srclen++;
	destlen = 0;
	while (dest[destlen] && destlen < size)
	{
		destlen++;
	}
	if (size <= destlen)
	{
		return (size + srclen);
	}
	i = 0;
	while (src[i] && i < (size - destlen - 1))
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[i + destlen] = '\0';
	return (destlen + srclen);
}

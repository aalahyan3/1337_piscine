/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalahyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:40:05 by aalahyan          #+#    #+#             */
/*   Updated: 2024/08/13 22:21:45 by aalahyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str)
			count++;
		while (*str && !is_charset(*str, charset))
			str++;
	}
	return (count);
}

char	*get_word(char *str, char *charset)
{
	char	*start;
	char	*word;
	int		i;

	start = str;
	while (*str && !is_charset(*str, charset))
		str++;
	word = (char *)malloc(sizeof(char) * (str - start + 1));
	i = 0;
	while (*start && start < str)
	{
		word[i] = *start;
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;
	int		nb_words;

	nb_words = count_words(str, charset);
	arr = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			str++;
		if (*str)
		{
			arr[i++] = get_word(str, charset);
			while (*str && !is_charset(*str, charset))
				str++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
/*
int main()
{
	int	i = 0;
	char str[]  = "/Library/Developer/Command";
	char charset[] = "/.";
	int	w = count_words(str, charset);
	char **arr = ft_split(str, charset);

	printf("%d\n", count_words("hello, world", ","));
	 while (i <= w)
	 {
	 	printf("str[%d]:\t%s\n", i, arr[i]);
	 	i++;
	 }
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: discovery <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:38:11 by discovery         #+#    #+#             */
/*   Updated: 2022/04/26 15:13:39 by jotta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_word_len(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static char	*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * size + 1);
	if (!str)
		return (NULL);
	ft_bzero(str, size + 1);
	return (str);
}

static int	ft_countwords(char const *str, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		word;
	int		str;
	int		new_word;
	char	**new_array;

	if (!s)
		return (NULL);
	new_array = malloc(sizeof(*new_array) * (ft_countwords(s, c) + 1));
	word = -1;
	str = 0;
	while (++word < ft_countwords(s, c))
	{
		new_word = 0;
		new_array[word] = ft_strnew(get_word_len(&s[str], c) + 1);
		if (!new_array[word])
			new_array[word] = NULL;
		while (s[str] == c)
			str++;
		while (s[str] != c && s[str])
			new_array[word][new_word++] = s[str++];
		new_array[word][new_word] = '\0';
	}
	new_array[word] = 0;
	return (new_array);
}
/*
#include <stdio.h>

int	main()
{
	char *s = "hello world james is a good boi";
	char **result;

	result = ft_split(s, 'e');
	
	int i = 0;
	while (result[i])
		printf("%s\n", result[i++]);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: discovery <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 20:46:05 by discovery         #+#    #+#             */
/*   Updated: 2022/03/17 18:34:00 by discovery        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	new = malloc(sizeof(*s1) * ft_strlen(s1) + sizeof(*s2) * ft_strlen(s2) + 1);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		new[i] = s2[j++];
		i++;
	}
	new[++i] = '\0';
	return (new);
}

/*
int main(void)
{
	char *s1 = "hello ";
	char *s2 = "world";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/

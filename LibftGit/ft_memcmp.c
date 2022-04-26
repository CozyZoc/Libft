/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: discovery <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:27:38 by discovery         #+#    #+#             */
/*   Updated: 2022/03/17 18:27:29 by discovery        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*i1;
	unsigned char	*i2;

	i1 = ((unsigned char *)s1);
	i2 = ((unsigned char *)s2);
	while (n > 0 || *i1 != '\0' || *i2 != '\0')
	{
		if (*i1 != *i2)
			break ;
		i1++;
		i2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*i1 - *i2);
}

/*
int main(void)
{
	char s1[50] = "helloa";
	char s2[50] = "helloz";

	printf("%d", ft_memcmp(s1, s2, 5));
	return (0);
}
*/

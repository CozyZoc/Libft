/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: discovery <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:09:06 by discovery         #+#    #+#             */
/*   Updated: 2022/01/24 18:30:56 by discovery        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t n)
{
	int i;

	i = 0;
	char *s;
	s = (char *)src;
	char *d;
	d = (char *)dst;
	while (s[i] && i < n)
		i++;
	while (i >= 0)
	{
		d[i] = s[i];
		i--;
	}
	d[i] = '\0';
	return (dst);
}
int main(void)
{
	char src[] = "Hello";
	char dst[10];

	ft_memmove(dst, src, 7);
	printf("%s", dst);
	return(0);
}


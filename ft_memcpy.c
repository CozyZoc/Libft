/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: discovery <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:34:15 by discovery         #+#    #+#             */
/*   Updated: 2022/01/24 18:05:28 by discovery        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	int i;

	i = 0;
	char *s;
	s = (char *)src;
	char *d;
	d = (char *)dst;
	while (s[i] && i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (dst);
}
int main(void)
{
	char src[] = "Hello";
	char dst[10];

	ft_memcpy(dst, src, 3);
	printf("%s", dst);
	return(0);
}

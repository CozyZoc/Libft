/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: discovery <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:34:15 by discovery         #+#    #+#             */
/*   Updated: 2022/04/26 15:04:24 by jotta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	while (n--)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*
int main(void)
{
	char src[] = "Hello";
	char dst[10];

	ft_memcpy(dst, src, 3);
	printf("%s", dst);
	return(0);
}
*/

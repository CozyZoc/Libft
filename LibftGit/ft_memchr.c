/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: discovery <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:58:38 by discovery         #+#    #+#             */
/*   Updated: 2022/03/17 18:27:06 by discovery        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*res;

	res = (unsigned char *)s;
	while (n-- > 0)
		if (*res++ == (unsigned char)c)
			return ((char *) res - 1);
	return (NULL);
}

/*
int	main(void)
{
	const char str[50] = "Wee pod d o p";
	printf("%s", ft_memchr(str, 'd', 20));
}
*/
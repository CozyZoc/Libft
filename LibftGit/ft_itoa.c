/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: discovery <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 16:38:35 by discovery         #+#    #+#             */
/*   Updated: 2022/03/17 18:26:55 by discovery        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_find_size(int n)
{
	size_t	size;

	size = n < 0;
	if (n < 0)
		n *= -1;
	while (1)
	{
		n /= 10;
		size++;
		if (n == 0)
			break ;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	size;
	long	num;
	char	*res;

	num = n;
	size = ft_find_size(n);
	res = malloc(size + 1);
	if (num < 0)
	{
		res[0] = '-';
		num *= -1;
	}
	res[size] = '\0';
	while (1 != '\0')
	{
		res[size -1] = (num % 10) + '0';
		num /= 10;
		size --;
		if (num == 0)
			break ;
	}
	return (res);
}

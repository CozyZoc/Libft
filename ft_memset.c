/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: discovery <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:57:15 by discovery         #+#    #+#             */
/*   Updated: 2022/02/01 18:10:18 by discovery        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		((char *)b)[i] = c;
		i++;
	}
	return(b);
}

#include <stdio.h> 
int main()
{
	char array[11];
	for (int i; i < 10; i++)
		array[i] = 'b';
	array[10] = '\0';
	ft_memset(array, 'g', 6);
	printf("%s\n", array);
}

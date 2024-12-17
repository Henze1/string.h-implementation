/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:08:06 by hpodratc          #+#    #+#             */
/*   Updated: 2024/12/11 15:10:23 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int				cpy_size;
	unsigned int	src_size;

	cpy_size = 0;
	src_size = 0;
	while (*(src + src_size))
	{
		src_size++;
	}
	if (size > 0)
	{
		if (src_size >= size)
			cpy_size = size - 1;
		else
			cpy_size = src_size;
		while (cpy_size--)
		{
			*dest = *src;
			++dest;
			++src;
		}
		*dest = '\0';
	}
	return (src_size);
}
/*
#include <stdio.h>
int main()
{
	char src[] = "Hello";
	char dest[10];
	ft_strlcpy(dest, src, 3);

	printf("%s\n", dest);
}*/

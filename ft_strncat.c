/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:21:36 by hpodratc          #+#    #+#             */
/*   Updated: 2024/12/14 13:55:48 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*buff;

	buff = dest;
	while (*buff)
	{
		++buff;
	}
	while (*src && nb--)
	{
		*buff = *src;
		++buff;
		++src;
	}
	*buff = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main()
{
    char dest[10] = "Hello";
    char src[] = "World";
    printf("%s\n", ft_strncat(dest, src, 3));
}*/

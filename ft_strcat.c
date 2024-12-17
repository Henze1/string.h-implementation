/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:20:47 by hpodratc          #+#    #+#             */
/*   Updated: 2024/12/13 12:21:29 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*buff;

	buff = dest;
	while (*buff)
	{
		++buff;
	}
	while (*src)
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
    char dest[20] = "Hello, ";
    char src[] = "World!";
    printf("%s\n", ft_strcat(dest, src));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:26:53 by hpodratc          #+#    #+#             */
/*   Updated: 2024/12/13 16:20:30 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	str_len(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len] != '\0')
	{
		++len;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;

	src_len = str_len(src);
	dest_len = str_len(dest);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (i < src_len && (dest_len + i) < size - 1)
	{
		dest[dest_len + i] = src[i];
		++i;
	}
	dest[dest_len + i] = '\0';
	return (src_len + dest_len);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char dest[11] = "Hello";
	char src[] = "World";
	char dest1[11] = "Hello";
	char src1[] = "World";
	unsigned int a = ft_strlcat(dest, src, 11);
	unsigned int a1 = strlcat(dest, src1, 11);
	printf("%d\n%s\n", a, dest);
	printf("%d\n%s\n", a1, dest1);
}*/

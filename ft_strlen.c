/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:35:28 by hpodratc          #+#    #+#             */
/*   Updated: 2024/12/17 10:37:35 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		++len;
	}
	return (len);
}
/*
#include <stdio.h>
int main(void)
{
    char    str[20] = "Hello";
    printf("%d\n", ft_strlen(str));
    return (0);
}*/

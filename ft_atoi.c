/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 10:41:04 by hpodratc          #+#    #+#             */
/*   Updated: 2024/12/17 10:42:27 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	sign = 0;
	num = 0;
	while (*str < '0' || *str > '9')
	{
		if (*str == '-')
			sign = 1;
		++str;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
		{
			num *= 10;
			num += *str - '0';
		}
		++str;
	}
	if (sign)
		num *= (-1);
	return (num);
}
/*
#include <stdio.h>
int main(void)
{
    char    strnum[] = "++++23dkfj+-+2348hbjs324";
    int a = ft_atoi(strnum);
    printf("%d\n", a);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:07:56 by hpodratc          #+#    #+#             */
/*   Updated: 2024/12/12 17:26:30 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	char	*buff;

	buff = str;
	if (*buff >= 'a' && *buff <= 'z')
		*buff -= 32;
	buff++;
	while (*buff)
	{
		if ((*(buff - 1) < '0' || (*(buff - 1) > '9'
					&& *(buff - 1) < 'A') || (*(buff - 1) > 'Z'
					&& *(buff - 1) < 'a') || *(buff - 1) > 'z')
			&& *buff >= 'a' && *buff <= 'z')
			*buff -= 32;
		else if (((*(buff - 1) >= '0' && *(buff - 1) <= '9')
				|| (*(buff - 1) >= 'A' && *(buff - 1) <= 'Z')
				|| (*(buff - 1) >= 'a' && *(buff - 1) <= 'z'))
			&& *buff >= 'A' && *buff <= 'Z')
			*buff += 32;
		buff++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char str[] = " salut, com56ment tu vas ?
   	42mots QuarAnte-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(str));
}*/

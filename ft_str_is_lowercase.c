/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:06:54 by hpodratc          #+#    #+#             */
/*   Updated: 2024/12/04 11:23:08 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	char	*buff;

	buff = str;
	if (*buff == '\0')
		return (1);
	while (*buff)
	{
		if (*buff < 'a' || *buff > 'z')
			return (0);
		++buff;
	}
	return (1);
}

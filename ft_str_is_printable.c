/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:07:13 by hpodratc          #+#    #+#             */
/*   Updated: 2024/12/04 11:25:33 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	char	*buff;

	buff = str;
	if (*buff == '\0')
		return (1);
	while (*buff)
	{
		if (*buff < 32 || *buff > 126)
			return (0);
		++buff;
	}
	return (1);
}

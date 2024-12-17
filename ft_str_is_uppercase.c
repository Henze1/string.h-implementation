/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppeecase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpodratc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 11:07:03 by hpodratc          #+#    #+#             */
/*   Updated: 2024/12/04 11:24:22 by hpodratc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	char	*buff;

	buff = str;
	if (*buff == '\0')
		return (1);
	while (*buff)
	{
		if (*buff < 'A' || *buff > 'Z')
			return (0);
		++buff;
	}
	return (1);
}

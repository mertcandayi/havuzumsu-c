/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdayi <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:25:05 by mdayi             #+#    #+#             */
/*   Updated: 2023/02/19 16:24:35 by mdayi            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] < 127 && str[i] >= 32)
	{
		i++;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
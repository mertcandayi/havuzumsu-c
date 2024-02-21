/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdayi <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 14:50:08 by mdayi             #+#    #+#             */
/*   Updated: 2023/02/22 16:08:59 by mdayi            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power > 0)
	{
		return (nb * ft_recursive_power(nb, power -1));
	}
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (i);
}

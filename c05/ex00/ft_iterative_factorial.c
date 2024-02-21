/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdayi <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:33:15 by mdayi             #+#    #+#             */
/*   Updated: 2023/02/22 14:22:56 by mdayi            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	while (nb < 0)
		return (0);
	return (nb);
}

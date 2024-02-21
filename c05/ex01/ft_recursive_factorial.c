/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdayi <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 12:09:02 by mdayi             #+#    #+#             */
/*   Updated: 2023/02/22 14:23:27 by mdayi            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb > 0)
	{
		fact *= nb * ft_recursive_factorial(nb -1);
		nb--;
	}
	else if (nb < 0)
		return (0);
	return (fact);
}

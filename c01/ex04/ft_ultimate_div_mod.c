/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdayi <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 19:39:03 by mdayi             #+#    #+#             */
/*   Updated: 2023/02/10 19:48:37 by mdayi            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;
	int	tmp2;

	tmp = *a;
	tmp2 = *b;
	*a = tmp / tmp2;
	*b = tmp % tmp2;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdayi <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:17:46 by mdayi             #+#    #+#             */
/*   Updated: 2023/02/09 20:22:32 by mdayi            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putchar(char k)
{
	write(1, &k, 1);
}	

void	ft_putnbr(int gelenSayi)
{
	if (gelenSayi == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		gelenSayi = 147483648;
	}
	if (gelenSayi < 0)
	{
		ft_putchar('-');
		gelenSayi *= -1;
	}
	if (gelenSayi < 10)
	{
		ft_putchar(gelenSayi + 48);
	}
	else
	{
		ft_putnbr(gelenSayi / 10);
		ft_putnbr(gelenSayi % 10);
	}	
}

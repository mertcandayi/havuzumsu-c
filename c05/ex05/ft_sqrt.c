/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdayi <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:31:31 by mdayi             #+#    #+#             */
/*   Updated: 2023/02/23 17:27:46 by mdayi            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	num;

	num = nb;
	i = 2;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (num > 1)
	{
		while (i <= num)
		{
			if (i * i == num)
				return (i);
			i++;
		}
	}
	return (0);
}

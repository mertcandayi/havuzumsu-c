/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bezdesir <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 16:38:25 by bezdesir          #+#    #+#             */
/*   Updated: 2023/02/05 20:27:12 by mdayi            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int ln, char f, char m, char l)
{
	int		letter_counter;

	letter_counter = 1;
	while (letter_counter <= ln)
	{
		if (letter_counter == 1)
			ft_putchar(f);
		else if (letter_counter == ln)
			ft_putchar(l);
		else
			ft_putchar(m);
			letter_counter++;
	}
	ft_putchar ('\n');
}

void	rush(int x, int y)
{
	int		line_counter;

	line_counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (line_counter <= y)
		{
			if (line_counter == 1)
				ft_print(x, 'A', 'B', 'C');
			else if (line_counter == y)
				ft_print(x, 'C', 'B', 'A');
			else
				ft_print(x, 'B', ' ', 'B');
					line_counter++;
		}
	}
}

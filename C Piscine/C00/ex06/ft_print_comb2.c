/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 03:52:32 by cpibool           #+#    #+#             */
/*   Updated: 2024/08/01 16:29:08 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	int	pos1;
	int	pos2;

	if (nbr > 9)
	{
		pos1 = nbr / 10;
		ft_putchar(pos1 + 48);
		pos2 = nbr % 10;
		ft_putchar(pos2 + 48);
	}
	if (nbr < 10)
	{
		ft_putchar('0');
		ft_putchar(nbr + 48);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_putnbr(i);
			if (!(i == 99 && j == 100))
				write(1, " ", 1);
			ft_putnbr(j);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}
*/

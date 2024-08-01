/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 03:10:18 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/11 13:49:27 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = 48;
	while (number < 58)
	{
		write(1, &number, 1);
		number++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
}
*/

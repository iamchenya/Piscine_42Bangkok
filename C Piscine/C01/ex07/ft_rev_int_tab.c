/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 21:57:41 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/16 18:05:24 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		x = tab [i];
		tab [i] = tab [size - i - 1];
		tab [size - i - 1] = x;
		i++;
	}
}
/*
int	main(void)
{
	int	i;
	int	size;
	
	int	arr [5] = {4, 3, 6, 7, 2};
	i = 0;
	size = 5;
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(arr, size);
	i = 0;
	size = 5;
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}
*/

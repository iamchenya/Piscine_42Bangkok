/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:07:12 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/16 20:11:35 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab [i] > tab [j])
			{
				x = tab [i];
				tab [i] = tab [j];
				tab [j] = x;
			}
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	size;
	int	i;
	int	tab [6] = {9, 54, 4, 1, 89, 46};	

	size = 6;
	i = 0;
	while (i < size)
	{
		printf("%d ", tab [i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab, 6);
	i = 0;
	size = 6;
	while (i < size)
	{
		printf("%d ", tab [i]);
		i++;
	}
	return (0);
}
*/

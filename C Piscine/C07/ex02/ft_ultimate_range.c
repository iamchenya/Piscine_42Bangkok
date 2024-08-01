/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 22:17:38 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/28 10:53:46 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*nbr;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	nbr = (int *)malloc(sizeof(int) * size);
	if (nbr == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		nbr[i] = min + i;
		i++;
	}
	*range = nbr;
	return (i);
}
/*
#include <stdio.h>

int	main()
{
	int	min;
	int	max;
	int	*range;
	int	nbr;

	min = 0;
	max = 0;
	nbr = ft_ultimate_range(&range, min, max);
	printf("%d", nbr);
	return (0);
}
*/

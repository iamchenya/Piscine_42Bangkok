/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 19:07:50 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/31 16:01:00 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*nbr;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	size = max - min;
	nbr = (int *)malloc(sizeof(int) * size);
	if (nbr == NULL)
		return (0);
	while (i < size)
	{
		nbr[i] = min + i;
		i++;
	}
	return (nbr);
}

#include <stdio.h>

int	main()
{
	int	min;
	int	max;
	int	i;
	int	*nbr;

	min = 11;
	max = 9;
	nbr = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d ", nbr[i]);
		i++;
	}
	return (0);
}

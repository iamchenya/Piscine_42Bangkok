/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 16:57:32 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/23 19:52:10 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	rest;
	int	minus;

	i = 0;
	rest = 0;
	minus = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -minus;
		i++;
	}
	if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
		return (0);
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		rest = rest * 10 + (str[i] - '0');
		i++;
	}
	return (minus * rest);
}
/*
int	main(int argc, char *argv[])
{
	printf("%d", ft_atoi(argv[1]));
}
*/

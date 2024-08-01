/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 10:58:46 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/23 00:26:30 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	while (src[k] != '\0' && i < size - 1)
	{
		dest[i + k] = src [k];
		k++;
		if (i == size - 1)
			break ;
	}
	dest[i] = '\0';
	return (i + j);
}
/*
int	main()
{
	char	src[] = "World";
	char	dest[] = "Hello";

	printf("%u %s", ft_strlcat(dest, src, 10), dest);
}
*/

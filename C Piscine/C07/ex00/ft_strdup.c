/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 17:07:50 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/29 19:33:37 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	int		i;
	char	*dup;

	size = 0;
	i = 0;
	while (src[size] != '\0')
		size++;
	dup = (char *)malloc((sizeof(char) * size) + 1);
	if (dup == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
#include <stdio.h>

int	main()
{
	char	src[] = "hungrymakmak";
	
	printf("%s", ft_strdup(src));
	return (0);
}
*/

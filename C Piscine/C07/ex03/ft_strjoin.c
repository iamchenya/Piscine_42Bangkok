/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 10:56:08 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/29 19:53:40 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strcpy(char **strs, char *str, int size, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			str[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] != '\0' && (i < size - 1))
		{
			str[k++] = sep[j++];
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s1;
	int		i;
	int		len;

	len = 0;
	i = 0;
	if (size == 0)
	{
		s1 = malloc(1);
		s1[0] = '\0';
		return (s1);
	}
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + ft_strlen(sep) * (size - 1);
	s1 = (char *)malloc((sizeof(char) * len) + 1);
	s1 = ft_strcpy(strs, s1, size, sep);
	return (s1);
}
/*
#include <stdio.h>

int	main()
{
	char	*s2;
	char	*strs[4] = {"iam", "hungry", "mak", "leoy"};

	s2 = ft_strjoin(4, strs, "++");
	printf("%s", s2);
	return (0);
}
*/

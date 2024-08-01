/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpibool <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 14:03:29 by cpibool           #+#    #+#             */
/*   Updated: 2024/07/31 17:06:48 by cpibool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (nbr = -nbr);
	else
		return (nbr);
}

# define ABS(nbr) ft_abs(nbr)

#endif

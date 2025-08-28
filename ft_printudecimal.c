/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printudecimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <moabed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:16:37 by moabed            #+#    #+#             */
/*   Updated: 2025/08/28 16:03:00 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printudecimal(unsigned int nb)
{
	char	x;
	int		count;

	count = 0;
	if (nb >= 10)
	{
		count += ft_printudecimal(nb / 10);
	}
	x = (nb % 10) + '0';
	count += write(1, &x, 1);
	return (count);
}

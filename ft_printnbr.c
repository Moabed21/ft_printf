/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <moabed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:16:17 by moabed            #+#    #+#             */
/*   Updated: 2025/08/28 15:57:45 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printnbr(int nb)
{
	char	x;
	int		count;

	count = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	else if (nb < 0)
	{
		count += write(1, "-", 1);
		count += ft_printnbr(-nb);
	}
	else if (nb <= 9)
	{
		x = nb + '0';
		count += write(1, &x, 1);
		return (1);
	}
	else if (nb > 9)
	{
		x = (nb % 10) + '0';
		nb /= 10;
		count += ft_printnbr(nb);
		count += write(1, &x, 1);
	}
	return (count);
}

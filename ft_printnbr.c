/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <moabed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:16:17 by moabed            #+#    #+#             */
/*   Updated: 2025/08/25 15:52:53 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_printnbr(int nb)
{
	char	x;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr_fd(nb *= -1, 1);
	}
	else if (nb <= 9)
	{
		x = nb + '0';
		write(1, &x, 1);
		return ;
	}
	else if (nb > 9)
	{
		x = (nb % 10) + '0';
		ft_putnbr_fd(nb /= 10, 1);
		write(1, &x, 1);
	}
}
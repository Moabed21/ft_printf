/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <moabed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:16:31 by moabed            #+#    #+#             */
/*   Updated: 2025/08/27 22:31:55 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	hexfinder(int x)
{
	char	y;

	if (x >= 0 && x <= 9)
	{
		y = x + '0';
		write(1, &y, 1);
	}
	if (x == 10)
		write(1, "A", 1);
	if (x == 11)
		write(1, "B", 1);
	if (x == 12)
		write(1, "C", 1);
	if (x == 13)
		write(1, "D", 1);
	if (x == 14)
		write(1, "E", 1);
	if (x == 15)
		write(1, "F", 1);
}

void	ft_printhex(int nb)
{
	if (nb == 0)
		return ;
	ft_printhex(nb / 16);
	hexfinder(nb % 16);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <moabed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/23 15:16:27 by moabed            #+#    #+#             */
/*   Updated: 2025/08/28 21:11:58 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *p)
{
	int	count;

	count = 0;
	if (!p)
	{
		count += write(1, "(null)", 6);
	}
	else
	{
		while (*p)
		{
			write(1, p, 1);
			p++;
			count++;
		}
	}
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:40:07 by moabed            #+#    #+#             */
/*   Updated: 2025/08/07 14:26:37 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	x;

	x = 0;
	while (*nptr == ' ')
	{
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		x *= 10;
		x = x + (*nptr - '0');
		nptr++;
	}
	if (!(*nptr >= '0' && *nptr <= '9'))
		return (x);
	return (x);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char x[] = "     24   54the 2e0";
	printf("%d", ft_atoi(x));
}*/
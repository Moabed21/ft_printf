/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <moabed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 08:38:52 by moabed            #+#    #+#             */
/*   Updated: 2025/08/23 15:48:05 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(const char *s, ...)
{
	int 	ssize;
	va_list args;

	ssize = 0;
	while (*s)
	{
		if (*s != '%')
			write (1, &*s, 1);
		else
		{
			
		}
		ssize++;
	}
	return(ssize);
}

int	main(void)
{
	
}
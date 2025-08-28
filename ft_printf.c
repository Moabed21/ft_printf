/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <moabed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 08:38:52 by moabed            #+#    #+#             */
/*   Updated: 2025/08/28 11:08:20 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	typesearcher(va_list args, char type, int ssize)
{
	if (type == 'c')
		ssize += ft_printchar(va_arg(args, char));
	if (type == 's')
		ssize += ft_printstr(va_arg(args, char *));
	if (type == 'i')
		ssize += ft_printnbr(va_arg(args, int));
	if (type == 'd')
		ft_printnbr(va_arg(args, int));
	if (type == 'p')
		ft_printhex(va_arg(args, int));
	if (type == 'X')
		ft_printhex(va_arg(args, int));
	if (type == 'x')
		ft_printshex(va_arg(args, int));
}

int	ft_printf(const char *s, ...)
{
	int		ssize;
	va_list	args;

	va_start(args, s);
	ssize = 0;
	while (*s)
	{
		if(*s == '%')
		{
			s++;
			if(*s == '%')
				write(1, '%', 1);
			else
				typesearcher(&args,*s, &ssize);
		}
		else
			ssize += write(1, s, 1);
	}
	va_end(args);
	return (ssize);
}

int	main(void)
{
}
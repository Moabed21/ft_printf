/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <moabed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 08:38:52 by moabed            #+#    #+#             */
/*   Updated: 2025/08/25 15:42:45 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	typesearcher(va_list args, char type)
{
	if (type == 'c')
		ft_printchar(va_arg(args, char));
	if (type == 's')
		ft_printstr(va_arg(args, char *));
	if (type == 'i')
		ft_printnbr(va_arg(args, int));
	if (type == 'd')
		ft_printnbr(va_arg(args, int));
	if (type == 'p')
		ft_printptr();

}

int	ft_printf(const char *s, ...)
{
	int		ssize;
	va_list	args;

	va_start(args, s);
	ssize = 0;
	while (*s)
	{
		if (*s == '%' && *(s + 1) == '%')
			write(1, "%",1);
		else if (*s != '%')
			write(1, s, 1);
		else if (*s == '%')
			typesearcher(args, *s);
		ssize++;
	}
	va_end(args);
	return (ssize);
}

int	main(void)
{
}
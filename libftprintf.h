/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <moabed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 08:38:57 by moabed            #+#    #+#             */
/*   Updated: 2025/08/28 11:09:11 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTHEADER_H
# define LIBFTHEADER_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printchar(char x);
int	ft_printstr(char *p);
int	ft_printnbr(int nb);
int	ft_printhex(int nb);
int	ft_printshex(int nb);

#endif
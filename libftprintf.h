/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <moabed@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 08:38:57 by moabed            #+#    #+#             */
/*   Updated: 2025/08/28 11:07:09 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTHEADER_H
# define LIBFTHEADER_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printchar(char x);
void	ft_printstr(char *p);
void	ft_printnbr(int nb);
void	ft_printhex(int nb);
void	ft_printshex(int nb);

#endif
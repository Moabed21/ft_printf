/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:26:20 by moabed            #+#    #+#             */
/*   Updated: 2025/08/14 02:40:09 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstsize;
	size_t	srclen;

	srclen = ft_strlen(src);
	dstsize = ft_strlen(dst);
	if (size <= dstsize)
	{
		return (size + srclen);
	}
	else
	{
		dst += dstsize;
		while (size - dstsize - 1 && *src != '\0')
		{
			*dst = *src;
			dst++;
			src++;
		}
		*dst = '\0';
		return (dstsize + srclen);
	}
}
/*
size is the expected size of the dst we have sent , in reality ,
	if its lower or equal than dstsize
(dstsize > size) we should return the expected string (srclen +size) but,
	if its higher than the dst size
just return the (dstsize + srcsize)
*/
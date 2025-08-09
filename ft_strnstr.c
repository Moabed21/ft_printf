/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 14:20:27 by moabed            #+#    #+#             */
/*   Updated: 2025/08/09 14:22:40 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;
    int j;

    if (*little == '\0')
        return (char *)big; 

    i = 0;
    while (i < len)
    {
        j = 0;
        while (little[j] != '\0' && big[i + j] == little[j])
            j++;
        if (little[j] == '\0')
            return (char *)(big + i); 
        i++;
    }
    return NULL;
}

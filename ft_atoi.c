/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:40:07 by moabed            #+#    #+#             */
/*   Updated: 2025/08/06 21:32:13 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_atoi(const char *nptr)
{
        int     x;

        x = 0;
        while (*nptr)
        {
                if(*nptr == ' ')
                        nptr++;
        }
        if()
}
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
            char x[]= "     21   54the 2e0";
            printf("%d",ft_atoi(x));
}
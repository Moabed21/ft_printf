/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:11:43 by moabed            #+#    #+#             */
/*   Updated: 2025/08/09 14:35:43 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
        char *p;
        char *ptp;
        size_t i;

        i = 0;
        s += start;
        p = malloc(len+1);
        if (p == NULL)
        {
                return (p);
        }
        ptp = p;
        while (i < len)
        {
                *p++ = *s++;
                i++; 
        }
        p[i] = '\0';
        return(ptp);
}

#include<stdio.h>
int main(void)
        {
        char x[] = "the last wizard ";

      char *p = ft_substr(x,0,3);
      printf("%s",p);
    free(p);   
}

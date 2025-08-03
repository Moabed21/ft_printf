/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 20:02:58 by moabed            #+#    #+#             */
/*   Updated: 2025/06/25 20:03:00 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (!(s1[i] - s2[i] == 0))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
char a[]="Az";
char b[]= "Azb";
int x = ft_strncmp(a,b,3);
printf("%d",x);
}

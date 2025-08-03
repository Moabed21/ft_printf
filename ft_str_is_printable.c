/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 19:26:51 by moabed            #+#    #+#             */
/*   Updated: 2025/06/22 19:26:54 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (str[j] == '\0')
	{
		return (1);
	}
	else
	{
		while (str[j] != '\0')
		{
			if (str[j] < 127 && str[j] >= 32)
				i = 1;
			else
			{
				i = 0;
				break ;
			}
			j++;
		}
		return (i);
	}
}
/*
int main(void){

char test[]= "Zf09";
int i= ft_str_is_printable(test);
char x;
x = i+ '0';
write(1,&x,1);
}*/

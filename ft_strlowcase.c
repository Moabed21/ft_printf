/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 19:58:58 by moabed            #+#    #+#             */
/*   Updated: 2025/06/22 19:58:59 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'A' && str[j] <= 'Z')
		{
			str[j] = str[j] + 32;
		}
		j++;
	}
	return (str);
}
/*
int main(void){

char test[5]= "Zf09\0";
int i= ft_strlowcase(test);
char x;
x = i+ '0';
write(1,&x,1);
}*/

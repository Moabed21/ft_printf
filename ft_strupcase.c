/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_strupcase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabed <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 19:36:01 by moabed            #+#    #+#             */
/*   Updated: 2025/06/22 19:36:04 by moabed           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 32;
		}
		j++;
	}
	return (str);
}
/*
int main(void){

char test[5]= "Zf09\0";
char *i= ft_strupcase(test);
char x;
x = i+ '0';
write(1,&x,1);
}*/

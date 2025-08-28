#include "libftprintf.h"

int	ft_printunbr(unsigned int nb)
{
	char	x;
	int		count;

	count = 0;
	if (nb >= 10)
	{
		count += ft_printunbr(nb / 10);
	}
	x = (nb % 10) + '0';
	count += write(1, &x, 1);
	return (count);
}

int	main(void)
{
	int hexValue = 0xA1;
	// Storing the hexadecimal value 1A (decimal 26) in an integer variable
	ft_printunbr(-10);
	// printf(" %d \n", ft_printhex(hexValue));
	return (0);
}
#include "libftprintf.h"

int	ft_printnbr(int nb)
{
	char x;
	int	count;

	count = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	else if (nb < 0)
	{
		count += write(1, "-", 1);
		count += ft_printnbr(nb *= -1);
	}
	else if (nb <= 9)
	{
		x = nb + '0';
		count += write(1, &x, 1);
		return (1);
	}
	else if (nb > 9)
	{
		x = (nb % 10) + '0';
		count += ft_printnbr(nb /= 10);
		count += write(1, &x, 1);
	}
	return (count);
}

int	main(void)
{
	int hexValue = 988765;
	// Storing the hexadecimal value 1A (decimal 26) in an integer variable
	// ft_printnbr(hexValue);
	printf(" %d \n", ft_printnbr(hexValue));
	return (0);
}
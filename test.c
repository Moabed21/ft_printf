#include "libftprintf.h"

void	hexfinder(int x)
{
	char	y;

	if (x >= 0 && x <= 9)
	{
		y = x + '0';
		write(1, &y, 1);
	}
	if (x == 10)
		write(1, "a", 1);
	if (x == 11)
		write(1, "b", 1);
	if (x == 12)
		write(1, "c", 1);
	if (x == 13)
		write(1, "d", 1);
	if (x == 14)
		write(1, "e", 1);
	if (x == 15)
		write(1, "f", 1);
}

void	ft_printhex(int nb)
{
	if (nb == 0)
		return ;
	ft_printhex(nb / 16);
	hexfinder(nb % 16);
}

int	main(void)
{
	int hexValue = 0x9a001;
	// Storing the hexadecimal value 1A (decimal 26) in an integer variable
	 ft_printhex(hexValue);
	//printf(" %X ", hexValue);
	return (0);
}
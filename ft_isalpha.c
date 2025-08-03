int	ft_isalpha(char x)
{
	if(!(x >= 'a' && x <='z') || (x >= 'A' && x <='Z'))
		return(0);
	else
		return (1);
}


int	ft_isalpha(char x)
{
	if(!(x >= 'a' && x <='z') || (x >= 'A' && x <='Z'))
		return(0);
	else
		return (1);
}

int	ft_isdigit(char x){
	if(x >='0' && x<='9')
		return (1);
	else
		return (0);
}
int	ft_isalnum(char x){
	
	if (ft_isdigit(x) || ft_isalpha(x))
		return (1);
	else 
		return (0);
}


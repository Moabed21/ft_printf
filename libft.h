#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
int	ft_atoi(const char *nptr);
void	ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);
int	ft_isalnum(int x);
int	ft_isalpha(int x);

#endif
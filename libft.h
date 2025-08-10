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
int	isascii(int x);
int	ft_isdigit(int x);
int	ft_isprint(int x);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void    ft_putchar_fd(char c, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *src);
char    *ft_strjoin(char const *s1, char const *s2);
size_t  strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char    *ft_strtrim(char const *s1, char const *set);
char    *ft_substr(char const *s, unsigned int start, size_t len);
int	ft_tolower(int x);
int	ft_toupper(int x);
#endif
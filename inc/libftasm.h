#ifndef LIBFTASM_H
# define LIBFTASM_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

# define GREEN  "\033[92m"
# define RED    "\x1b[31m"
# define RESET  "\x1B[0m"

void    ft_bzero(void *s, size_t n);
char    *ft_strcat(char *restrict s1, const char *restrict s2);
int     ft_isalpha(int c);
int	    ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_puts(const char *s);
size_t	ft_strlen(const char *s);
void    *ft_memset(void *b, int c, size_t len);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
char    *ft_strdup(const char *s1);
void    ft_cat(const int fd);
int     ft_islower(int c);
int     ft_isspace(int c);
int     ft_putchar(int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);

#endif
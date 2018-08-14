#ifndef LIBFTASM_H
# define LIBFTASM_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

# define GREEN  "\033[92m"
# define RED    "\x1b[31m"
# define RESET  "\x1B[0m"

int	    ft_isdigit(int c);
int     ft_isprint(int c);
int     ft_isalpha(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
void    ft_bzero(void *s, size_t n);
#endif
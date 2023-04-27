#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	        _printf(const char *form, ...);
unsigned int	ft_unputnbr(unsigned int a);
int				hixap(unsigned long n);
int				hixad(unsigned int n, char c);
int				lenhixa(unsigned long n);
int				ft_putnbr(int n);
int				llen(long n);
int				ft_putchar(char c);
int				ft_putstr(char *s);

#endif

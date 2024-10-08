#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putchar(char str);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;	
	}
}

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

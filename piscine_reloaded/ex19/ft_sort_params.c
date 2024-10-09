/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:32:10 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/10/08 17:49:05 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_params(int argc, char **argv);

void	ft_putchar(char c);

void	ft_putstr(char *str);

int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	return (0);
}

void	ft_sort_params(int argc, char **argv)
{
	int	param;
	int	count;
	char	*word_swap;

	param = 1;
	count = 0;
	while (param < argc)
	{
		if (argc == 1)
			break;
		if (ft_strcmp(&argv[param][0], &argv[param - 1][0]) < 0)
		{
			word_swap = argv[param];
			argv[param] = argv[param - 1];
			argv[param - 1] = word_swap;
			param = 1;  
		}
		else
		{
			ft_putstr(argv[param]);
			ft_putchar('\n');
			param++;
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	diference;

	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	diference = *s1 - *s2;
	return (diference);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:08:03 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/10/04 20:22:18 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= 57)
	{
		ft_putchar(number);
		number++;
	}
}

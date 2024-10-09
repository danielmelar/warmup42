/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 18:33:18 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/10/08 18:33:41 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

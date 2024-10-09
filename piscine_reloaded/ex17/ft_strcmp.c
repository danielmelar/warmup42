/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:29:11 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/10/08 16:29:29 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

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

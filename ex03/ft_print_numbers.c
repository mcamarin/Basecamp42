/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamarin <mcamarin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 04:37:38 by mcamarin          #+#    #+#             */
/*   Updated: 2021/04/06 13:18:39 by mcamarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_numbers(void)
{
	char numeros;

	numeros = '0';
	while (numeros <= '9')
	{
		ft_putchar(numeros);
		numeros++;
	}
}

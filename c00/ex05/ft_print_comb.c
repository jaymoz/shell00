/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lross <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 21:59:21 by lross             #+#    #+#             */
/*   Updated: 2021/02/05 20:56:10 by lross            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int		first;
	int		second;
	int		third;

	first = 48 - 1;
	while (++first <= 57)
	{
		second = first;
		while (second++ <= 57)
		{
			third = second;
			while (++third <= 57)
			{
				write(1, &first, 1);
				write(1, &second, 1);
				write(1, &third, 1);
				if (first != 55)
				{
					write(1, ", ", 2);
				}
			}
		}
	}
	ft_putchar('\n');
}

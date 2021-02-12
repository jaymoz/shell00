/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lross <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 23:26:36 by lross             #+#    #+#             */
/*   Updated: 2021/02/05 10:55:43 by lross            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int num)
{
	int		max;

	max = 1;
	if (num < 0 && num / 10 == 0)
	{
		ft_putchar('-');
	}
	if (num < 0)
	{
		max = -1;
	}
	if (num / 10 != 0)
	{
		ft_putnbr(num / 10);
	}
	ft_putchar(((num % 10) * max) + '0');
}

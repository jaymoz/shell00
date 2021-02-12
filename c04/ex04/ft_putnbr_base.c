/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lross <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:29:50 by lross             #+#    #+#             */
/*   Updated: 2021/02/10 18:28:31 by lross            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_in_base(char c, char *base)
{
	while (*base)
	{
		if (c == *base++)
		{
			return (1);
		}
	}
	return (0);
}

void	ft_print(unsigned int n, char *base, unsigned int size)
{
	if (n > size - 1)
	{
		ft_print(n / size, base, size);
		n %= size;
	}
	ft_putchar(base[n]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;

	size = -1;
	while (base[++size])
	{
		if (base[size] == '+' || base[size] == '-' || base[size] == ' ')
			return ;
		if (ft_in_base(base[size], base + size + 1))
			return ;
		if ((base[size] >= 9 && base[size] <= 13))
			return ;
	}
	if (size < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_print(-nbr, base, size);
	}
	else
		ft_print(nbr, base, size);
}

int		main(void)
{
	char	*str = "hello";
	int		hj = 8;

	ft_putnbr_base(hj, str);
}

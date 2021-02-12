/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lross <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 05:04:55 by lross             #+#    #+#             */
/*   Updated: 2021/02/12 20:55:42 by lross            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int		main(int argc, char *argv[])
{
	int		i;

	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[argc - i]);
		ft_putstr("\n");
	}
}

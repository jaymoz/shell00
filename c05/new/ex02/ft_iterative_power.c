/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lross <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:58:24 by lross             #+#    #+#             */
/*   Updated: 2021/02/10 21:21:33 by lross            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		result;

	i = 1;
	result = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
		return (1);
	while (i < power)
	{
		result = nb * nb;
		i++;
	}
	return (result);
}

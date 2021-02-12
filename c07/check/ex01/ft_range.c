/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lross <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 22:58:18 by lross             #+#    #+#             */
/*   Updated: 2021/02/12 23:39:24 by lross            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		range;
	int		i;
	int		*j;

	if (min >= max)
		return (0);
	range = max - min - 1;
	if ((j = malloc(range * sizeof(int))) == NULL)
		return (0);
	i = 0;
	while (i <= range)
	{
		j[i] = min + i;
		i++;
	}
	return (j);
}

int		main(void)
{
}

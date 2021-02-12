/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lross <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 23:13:12 by lross             #+#    #+#             */
/*   Updated: 2021/02/12 23:39:55 by lross            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*j;

	if (min >= max)
		return (0);
	j = (int *)malloc((max - min) * sizeof(int));
	if (j == NULL)
		return (0);
	i = 0;
	while (min <= max - 1)
	{
		j[i] = min++;
		i++;
	}
	*range = j;
	return (i);
}

int		main(void)
{
}

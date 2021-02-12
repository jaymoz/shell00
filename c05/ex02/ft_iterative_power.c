/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lross <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 20:58:24 by lross             #+#    #+#             */
/*   Updated: 2021/02/12 11:07:34 by lross            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		main(int argc, char *argv[])
{
	int		i;
	
	printf("%i", argc);
	for (i=0;i < argc; i++)
	{
		printf("argv[%i]: %s\n", i, argv[i]);
	}
}

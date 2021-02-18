/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_element.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lross <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:52:38 by lross             #+#    #+#             */
/*   Updated: 2021/02/18 20:54:22 by lross            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *res;

	res = 0;
	if ((res = malloc(sizeof(t_list))))
	{
		res->data = data;
		res->next = 0;
	}
	return (res);
}

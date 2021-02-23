/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lross <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 21:02:50 by lross             #+#    #+#             */
/*   Updated: 2021/02/19 21:58:24 by lross            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*el;

	if (!(el = malloc(sizeof(t_btree))))
		return (0);
	el->left = 0;
	el->right = 0;
	el->item = item;
	return (el);
}

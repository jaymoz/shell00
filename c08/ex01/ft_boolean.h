/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lross <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 21:33:47 by lross             #+#    #+#             */
/*   Updated: 2021/02/13 22:00:54 by lross            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum {
	false = 0,
	true = 1,
}	t_bool;

# define FALSE false
# define TRUE true

# define EVEN(number) (number % 2 == 0)

# define EVEN_MSG " I have an even number of arguments.\n"
# define ODD_MSG " I have an odd number of arguments.\n"

# define SUCCESS 0

#endif

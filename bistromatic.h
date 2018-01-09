/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bistromatic.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:18:08 by passef            #+#    #+#             */
/*   Updated: 2018/01/08 16:10:44 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BISTROMATIC_H_
#define _BISTROMATIC_H_

#include "./libft/libft.h"

typedef struct s_env
{
	unsigned int len_op;
	char *str;
	int base;
	char sign;
}t_env;

void		handle_base(t_env *e);

#endif
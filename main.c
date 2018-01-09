/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passef <passef@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/08 12:12:42 by passef            #+#    #+#             */
/*   Updated: 2018/01/08 22:40:18 by passef           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bistromatic.h"

static void		init(t_env *e)
{
	e->sign[0] = '*';
	e->sign[1] = '/';
	e->sign[2] = '+';
	e->sign[3] = '-';
	e->sign[4] = '%';
	e->base = 0;
	e->len_op = 0;
	ft_bzero(e->op, e->len_op);
}

void			store_data(t_env *e, char *line, char ***av)
{
	e->len_op = ft_atoi(av[0][2]);
	// e->base_str = malloc(sizeof(e->base_str) * ft_strlen(av[0][1]) + 1);
	e->base_str = av[0][1];
	if(!(e->op = malloc(sizeof(e->op) * e->len_op + 1)))
		exit(EXIT_FAILURE);
	parsing(e, line);
	handle_base(e);
}

int				main (int ac, char **av)
{
	if (ac == 3)
	{
		t_env	e;
		char echo[256] = {"echo '3+6'"};

		init(&e);
		store_data(&e, echo, &av);

		//if (!(get_next_line(0, &line)))
		//	return (0);
		free(e.op);
	}
	printf("\n");
	return (0);
}

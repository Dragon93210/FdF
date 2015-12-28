/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspar <agaspar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 14:26:05 by agaspar           #+#    #+#             */
/*   Updated: 2015/12/28 18:23:37 by agaspar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fdf.h>

int		main(int ac, char **av)
{
	if (ac != 2)
		ft_putendl("So many arguments");
	else
	{
		load_map(av[1]);
		//t_env e;
		//env_init(&e);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaspar <agaspar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 13:52:03 by agaspar           #+#    #+#             */
/*   Updated: 2016/01/05 17:49:02 by agaspar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <mlx.h>
# include <math.h>
# include <libft.h>

typedef struct	s_pos
{
	int				x;
	int				y;
	int				z;
	struct s_pos	*next;
}				t_pos;

typedef struct	s_env
{
	void	*mlx;
	void	*win;
	size_t	height;
	size_t	width;
	t_pos	*pos;
	float	zoom;
}				t_env;

void	load_map(char *file);
void	draw_cube(t_env *e, int pos_x, int pos_y);
void	draw_plan(t_env *e);

void	env_init(t_env *e, t_pos *pos);
int		rgb_color(int red, int green, int blue);

int		rgb_color(int r, int g, int b);

void	error(char *error);

#endif

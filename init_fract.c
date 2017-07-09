/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 16:33:35 by ddevico           #+#    #+#             */
/*   Updated: 2017/06/25 17:54:08 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	error_arg(int n)
{
	if (n == 0)
		ft_putstr_fd("Erreur arg\n\n", 2);
	else if (n == 2)
		ft_putstr_fd("Erreur arg\n\n", 2);
	else
		ft_putstr_fd("Erreur arg\n\n", 2);
	ft_putstr_fd("Mandelbrot: M\nJulia: J\nNewton: N\n", 2);
	exit(EXIT_FAILURE);
}

int			frac_type(int ac, char **av)
{
	if (ac < 2)
		error_arg(0);
	if (ac > 2)
		error_arg(2);
	if (av[1][0] == 'J')
		return (1);
	else if (av[1][0] == 'M')
		return (2);
	else if (av[1][0] == 'N')
		return (3);
	error_arg(1);
	return (0);
}

void		init_sval(t_env *e)
{
	if (e->fractol == 1)
	{
		e->x1 = -2.5;
		e->x2 = 1;
		e->y1 = -1;
		e->y2 = 1;
	}
	else if (e->fractol == 2)
	{
		e->x1 = -2;
		e->x2 = 2;
		e->y1 = -2;
		e->y2 = 2;
	}
	else if (e->fractol == 3)
	{
		e->x1 = -4;
		e->x2 = 4;
		e->y1 = -4;
		e->y2 = 4;
		e->xs = e->img.width / 2;
	}
}

void		init_env(t_env *e, int ac, char **av)
{
	t_vec3	color;

	e->fractol = frac_type(ac, av);
	e->img.width = WIDTH;
	e->img.height = HEIGHT;
	e->mlx = mlx_init();
	e->win = mlx_new_window(e->mlx, e->img.width, e->img.height, "Fract'ol");
	e->img.img_ptr = mlx_new_image(e->mlx, e->img.width, e->img.height);
	e->img.img = (unsigned char *)mlx_get_data_addr(e->img.img_ptr, \
				&e->img.bpp, &e->img.sl, &e->img.endian);
	e->xs = 0;
	e->ys = 0;
	e->iter = 50;
	e->theme = 0;
	color = (t_vec3){0.0, 0.0, 0.0};
	e->color = color;
	init_sval(e);
}

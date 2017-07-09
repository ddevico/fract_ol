/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 16:33:35 by ddevico           #+#    #+#             */
/*   Updated: 2017/07/25 23:38:05 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int		expose_hook(t_env *e)
{
	if (e->fractol == 1)
		julia(e);
	else if (e->fractol == 2)
		mandelbrot(e);
	else if (e->fractol == 3)
		newton(e);
	mlx_put_image_to_window(e->mlx, e->win, e->img.img_ptr, 0, 0);
	mlx_string_put(e->mlx, e->win, 10, 10, 0xFFFFFF, "Changer la couleur (T)");
	return (1);
}

int		main(int ac, char **av)
{
	t_env e;

	init_env(&e, ac, av);
	mlx_key_hook(e.win, key_press, &e);
	mlx_mouse_hook(e.win, mouse, &e);
	mlx_hook(e.win, 6, 64, &mouse2, &e);
	mlx_expose_hook(e.win, expose_hook, &e);
	mlx_loop(e.mlx);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 16:33:35 by ddevico           #+#    #+#             */
/*   Updated: 2017/07/25 23:38:05 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void	key_press2(int keycode, t_env *e)
{
	double tmp;

	if (keycode == LEFT || keycode == RIGHT)
	{
		tmp = (e->x2 - e->x1) / 4;
		e->x1 += (keycode == RIGHT ? tmp : -tmp);
		e->x2 += (keycode == RIGHT ? tmp : -tmp);
	}
}

int			key_press(int keycode, t_env *e)
{
	double	tmp;

	if (keycode == ESC)
	{
		mlx_destroy_window(e->mlx, e->win);
		exit(EXIT_SUCCESS);
	}
	if (keycode == T)
		e->theme += (e->theme == 5 ? -5 : 1);
	else if (keycode == UP || keycode == DOWN)
	{
		tmp = (e->y2 - e->y1) / 4;
		e->y1 += (keycode == DOWN ? tmp : -tmp);
		e->y2 += (keycode == DOWN ? tmp : -tmp);
	}
	else
		key_press2(keycode, e);
	expose_hook(e);
	return (1);
}

int			mouse2(int x, int y, t_env *e)
{
	e->xs = posdx(e, x);
	e->ys = posdy(e, y);
	expose_hook(e);
	return (1);
}

int			mouse(int button, int x, int y, t_env *e)
{
	double		x1;
	double		y1;

	x1 = posdx(e, x);
	y1 = posdy(e, y);
	if (button == 1 || button == 4)
	{
		e->x1 = x1 + ((e->x1 - x1) / 2);
		e->x2 = e->x2 + ((x1 - e->x2) / 2);
		e->y1 = y1 + ((e->y1 - y1) / 2);
		e->y2 = e->y2 + ((y1 - e->y2) / 2);
	}
	else if (button == 2 || button == 5)
	{
		e->x1 = e->x1 - ((e->x2 - e->x1) / 2);
		e->x2 = e->x2 + ((e->x2 - e->x1) / 2);
		e->y1 = e->y1 - ((e->y2 - e->y1) / 2);
		e->y2 = e->y2 + ((e->y2 - e->y1) / 2);
	}
	expose_hook(e);
	return (1);
}

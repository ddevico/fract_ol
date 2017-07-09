/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mendelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 16:33:35 by ddevico           #+#    #+#             */
/*   Updated: 2017/07/25 23:38:05 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	calculate_m(t_env *e, double x0, double y0)
{
	double	x;
	double	y;
	double	x2;
	double	y2;
	double	i;

	x = 0.0;
	y = 0.0;
	x2 = e->xs;
	y2 = e->ys;
	i = -1.0;
	while (++i < e->iter && (x2 + y2) < e->iter)
	{
		y = 2.0 * x * y + y0;
		x = x2 - y2 + x0;
		x2 = x * x;
		y2 = y * y;
	}
	i = i * (1 - 1.0) + i - log2(log2(x2 + y2)) * 1.0;
	e->color = couleur(i, (e->theme > 2 ? e->theme - 3 : e->theme));
	pixel_put(e);
}

void	mandelbrot(t_env *e)
{
	e->y = -1;
	while ((e->y += 1) < e->img.height)
	{
		e->x = -1;
		while ((e->x += 1) < e->img.width)
			calculate_m(e, posdx(e, e->x), posdy(e, e->y));
	}
}

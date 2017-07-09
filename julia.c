/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 16:33:35 by ddevico           #+#    #+#             */
/*   Updated: 2017/06/25 17:53:56 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

static void		calculate_julia(t_env *e, double x0, double y0)
{
	double		x1;
	double		y1;
	double		sco;
	double		i;

	i = -1.0;
	sco = exp(-sqrt(x0 * x0 + y0 * y0));
	while (++i < e->iter && (x0 + y0) < 4.0)
	{
		x1 = x0;
		y1 = y0;
		x0 = x1 * x1 - y1 * y1 + e->xs;
		y0 = 2.0 * x1 * y1 + e->ys;
		sco += exp(-sqrt(x0 * x0 + y0 * y0));
	}
	i = i * (1 - 1.0) + sco * 1.0;
	e->color = couleur(i, (e->theme > 2 ? e->theme - 3 : e->theme));
	pixel_put(e);
}

void			julia(t_env *e)
{
	e->y = -1;
	while ((e->y += 1) < e->img.height)
	{
		e->x = -1;
		while ((e->x += 1) < e->img.width)
			calculate_julia(e, posdx(e, e->x), posdy(e, e->y));
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 16:33:35 by ddevico           #+#    #+#             */
/*   Updated: 2017/07/25 23:38:05 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

t_vec3		couleur(double x, int theme)
{
	t_vec3	color;

	color.x = 0.5 + 0.5 * cos(3.0 + x * 0.15 + (theme == 0));
	color.y = 0.5 + 0.5 * cos(3.0 + x * 0.15 + (theme == 1));
	color.z = 0.5 + 0.5 * cos(3.0 + x * 0.15 + (theme == 2));
	return (color);
}

double		posdy(t_env *e, int y)
{
	double dy;

	dy = (((e->y2 - e->y1) * y) / e->img.height) + e->y1;
	return (dy);
}

double		posdx(t_env *e, int x)
{
	double dx;

	dx = (((e->x2 - e->x1) * x) / e->img.height) + e->x1;
	return (dx);
}

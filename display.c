/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 16:33:35 by ddevico           #+#    #+#             */
/*   Updated: 2017/07/25 23:38:05 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	pixel_put(t_env *e)
{
	int		pos;

	pos = (e->x * e->img.bpp / 8) + (e->y * e->img.sl);
	e->img.img[pos] = (int)(e->color.z * 256);
	e->img.img[pos + 1] = ((int)(e->color.y * 256));
	e->img.img[pos + 2] = ((int)(e->color.x * 256));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddevico <ddevico@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/16 16:33:35 by ddevico           #+#    #+#             */
/*   Updated: 2017/06/25 17:44:06 by ddevico          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <mlx.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# include <fcntl.h>
# include "libft/libft.h"
# include <time.h>

# define WIDTH 640
# define HEIGHT 480

# define ESC 53
# define A 0
# define S 1
# define D 2
# define T 17
# define LEFT 123
# define RIGHT 124
# define UP 126
# define DOWN 125

typedef struct					s_vec3
{
	double					x;
	double					y;
	double					z;
}								t_vec3;

typedef struct					s_img
{
	void					*img_ptr;
	unsigned char			*img;
	int						bpp;
	int						sl;
	int						endian;
	int						width;
	int						height;
}								t_img;

typedef struct					s_env
{
	void					*mlx;
	void					*win;
	t_img					img;
	t_vec3					color;
	int						fractol;
	int						iter;
	int						x;
	int						y;
	int						theme;
	double					x1;
	double					x2;
	double					y1;
	double					y2;
	double					xs;
	double					ys;
}								t_env;

void							init_env(t_env *e, int ac, char **av);
int								mouse(int button, int x, int y, t_env *e);
int								mouse2(int x, int y, t_env *e);
int								key_press(int keycode, t_env *e);
void							mandelbrot(t_env *e);
void							julia(t_env *e);
void							newton(t_env *e);
void							pixel_put(t_env *e);
double							posdx(t_env *e, int x);
double							posdy(t_env *e, int y);
t_vec3							couleur(double x, int theme);
int								expose_hook(t_env *e);

#endif

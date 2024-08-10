/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_events.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:03:50 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/08/10 19:27:05 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fractal.h"

int	close_handler(t_fractal *fractal)
{
	mlx_destroy_image(fractal->mlx_connection, fractal->img.img.ptr);
	mlx_destroy_window(fractal->mlx_connection, fractal->mlx_window);
	mlx_destroy_display(fractal->mlx_connection);
	free(fractal->mlx_connection);
	exit(0);
}

int	key_handler(int keysym, t_fractal *fractal)
{
	if (keysym == XK_Escape)
		close_handler(fractal);
	if (keysym == XK_Left)
		fractal->shift_x += (0.5 * fractal->zoom);
	else if (keysym == XK_Right)
		fractal->shift_x -= (0.5 * fractal->zoom);
	else if (keysym == XK_Up)
		fractal->shift_y += (0.5 * fractal->zoom);
	else if (keysym == XK_Down)
		fractal->shift_y -= (0.5 * fractal->zoom);
	else if (keysym == XK_plus)
		fractal->iteration_definition += 10;
	else if (keysym == XK_minus)
		fractal->iteration_definition -= 10;
	fractal_render(fractal);
	return (0);
}

int	mouse_handler(int button, int x, int y, t_fractal *fractal)
{
	if (button == Button5)
		fractal->zoom *= 0.95;
	else if (button == Button4)
		fractal->zoom == *= 1.05;
	fractal_render(fractal);
	return (0);
}

int	julia_track(int, int y, t_fractal *fractal)
{
	if (!ft_strncmp(fractal->name, "julia", 5))
	{
		fractal->julia_x = (map(x, -2, 2, 0, WIDTH) * fractal->zoom) + fractal->shift_x;
		fractal->julia_y = (map(y, 2, -2, 0, HEIGHT) * fractal->zoom) + fractal_shift_y;
		fractal_render(fractal);
	}
	return (0);
}

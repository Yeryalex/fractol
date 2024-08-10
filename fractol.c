/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:11:20 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/08/10 21:41:05 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fractol.h"

void	num_error(char *s)
{
	if (is_numeric(s))
	{
		ft_putstr_fd("\033[96mPlease, enter only\033[0m", 1);
		ft_putstr_fd("\033[96m numeric values!!!\n\033[0m", 1);
		exit(1);
	}
}

int	main(int argc, char **argv)
{
	t_fractal	fractal;

	if ((argc == 2 && !ft_strncmp(argv[1], "mandelbrot", 10))
		|| (argc == 4 && !ft_strncmp(argv[1], "julia", 5)))
	{
		fractal.name = argv[1];
		if (!ft_strncmp(fractal.name, "julia", 5))
		{
			fractal.julia_x = atodbl(argv[2]);
			fractal.julia_y = atodbl(argv[3]);
		}
		fractal_init(&fractal);
		fractal_render(&fractal);
		mlx_loop(fractal.mlx_connection);
	}
	else
	{
		ft_putstr_fd(ERROR_MESSAGE, 1);
		ft_putstr_fd(ERROR_MESSAGE2, 1);
		ft_putstr_fd(ERROR_MESSAGE3, 1);
		ft_putstr_fd(ERROR_MESSAGE4, 1);
		exit(1);
	}
	return (0);
}

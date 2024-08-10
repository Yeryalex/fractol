/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:10:03 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/08/07 17:11:37 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>
# include "minilibx-linux/mlx.h"

#define ERROR_MESSAGE "\033[96m=====================================\n\t\tUsage:\n"
#define ERROR_MESSAGE2 "=====================================\n1) ./fractol "
#define ERROR_MESSAGE3 "mandelbrot \n2) ./fractol julia [value 1] [value i]\n\033[0m"

#define WIDTH 800
#define HEIGHT 800

typedef struct s_img
{
	void	*img_ptr;
	char	*pixel_ptr;
	int		bpp;
	int		endian;
	int		line_len;
}				t_img;

typedef struct s_fractal
{
	char	*name;
	void	*mlx_connection;
	void	*mlx_window;
	t_img	img;
}			t_fractal;

int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putstr_fd(char *str, int fd);
void	fractal_init(t_fractal *fractal);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:11:20 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/08/06 17:14:30 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fractol.h"

int	main(int argc, char **argv)
{
	if ((argc == 2 && !ft_strncmp(argv[1], "mandelbrot", 10))
		|| (argc == 4 && !ft_strncmp(argv[1], "julia", 5)))
		ft_putstr_fd("succes!!!\n", 1);
	else
	{
		ft_putstr_fd(ERROR_MESSAGE, 1);
		ft_putstr_fd(ERROR_MESSAGE2, 1);
		ft_putstr_fd(ERROR_MESSAGE3, 1);
	}
	return (0);
}

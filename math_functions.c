/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 19:28:58 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/08/10 20:09:43 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fractol.h"

double	map(double unscaled_num, double new_min, double new_max, double old_max)
{
	double	old_min;
	double	unscaled;

	old_min = 0;
	unscaled = unscaled_num - old_min;
	return ((new_max - new_min) * unscaled / (old_max - old_min) + new_min);
}

t_complex	sum_complex(t_complex z1, t_complex z2)
{
	t_complex	result;

	result.x = z1.x + z2.x;
	result.y = z1.y + z2.y;
	return (result);
}

t_complex	square_complex(t_complex z)
{
	t_complex	result;

	result.x = (z.x * z.x) - (z.y * z.y);
	result.y = 2 * z.x * z.y;
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 18:10:03 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/08/06 17:15:03 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <math.h>

#define ERROR_MESSAGE "=====================================\n\t\tUsage:\n"
#define ERROR_MESSAGE2 "=====================================\n1) ./fractol "
#define ERROR_MESSAGE3 "mandelbrot \n2) ./fractol julia [value 1] [value i]\n"

int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_putstr_fd(char *str, int fd);

#endif

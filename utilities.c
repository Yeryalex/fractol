/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:32:36 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/08/10 20:35:25 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "fractol.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_putstr_fd(char *str, int fd)
{
	if (!str || fd <= 0)
		return ;
	while (*str)
	{
		write(fd, str, 1);
		str++;
	}
}

double	atodbl(char *s)
{
	long	integer_part;
	double	fractional_part;
	double	decimal;
	int		sign;

	integer_part = 0;
	fractional_part = 0;
	sign = 1;
	decimal = 1;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	while (*s == '+' || *s == '-')
		if (*s++ == '-')
			sign = -sign;
	while (*s != '.' && *s)
		integer_part = (integer_part * 10) + (*s++ - 48);
	if (*s == '.')
		s++;
	while (*s)
	{
		decimal /= 10;
		fractional_part = fractional_part + (*s++ - 48) * decimal;
	}
	return ((integer_part + fractional_part) * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:29:41 by chmassa           #+#    #+#             */
/*   Updated: 2022/11/30 10:58:17 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_nblen(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_print_u(unsigned int n)
{
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_print_u(n / 10);
		ft_putchar(n % 10 + '0');
	}
	return (ft_nblen(n));
}

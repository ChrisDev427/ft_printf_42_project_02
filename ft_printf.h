/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chmassa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:24:36 by chmassa           #+#    #+#             */
/*   Updated: 2022/11/30 11:13:39 by chmassa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_printf(const char *s, ...);
int		ft_flag_linker(char flag, va_list list);
int		ft_print_x(unsigned int n, char *base);
int		ft_print_nbr(int nb);
int		ft_print_u(unsigned int n);
int		ft_print_p(unsigned long long int n, char *base);
int		ft_print_di(int nb);
size_t	ft_strlen(const char *s);

#endif

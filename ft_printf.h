/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:46:32 by sfroidev          #+#    #+#             */
/*   Updated: 2023/03/16 17:51:04 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_all_types(va_list *args, char c);
int	ft_putchar_printf(char a);
int	ft_string(char *str);
int	ft_type_di(int a);
int	ft_type_p(unsigned long a, int cont);
int	ft_type_u(unsigned int a);
int	ft_type_x(unsigned int a, char c);

#endif

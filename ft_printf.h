/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:15:50 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/13 20:30:51 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>

# define HEX_B_BASE "0123456789ABCDEF"
# define HEX_S_BASE "0123456789abcdef"
# define DEC_BASE "0123456789"
# define START_POINTER "0x"

int		ft_printf_base(unsigned long int n, char *s);
int		ft_printf_str(char *s);
int		ft_printf_char(char c);
int		ft_printf(const char *str, ...);
void	ft_putstr(char *str);
int		ft_printf_nbr(long long int n);

#endif 
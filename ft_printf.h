/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:15:50 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/12 22:32:37 by yaidriss         ###   ########.fr       */
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

int		ft_printf_base(long int n, char *s);
int		ft_printf_str(char *s);
int		ft_printf_char(char c);
int		ft_printf(const char *str, ...);
void	ft_putstr(char *str);
int		ft_format(va_list	args, char c);
int		ft_putchar(char c);
int		ft_printstr(char *str);
int		ft_printnbr(int n);
int		ft_putnbr_base(unsigned long long n, char *base);
char	*ft_itoa(long int n);
int		ft_strlen(const char *s);
char	*ft_strdup(const char	*s1);
int		ft_printnbr_u(unsigned int n);

#endif 
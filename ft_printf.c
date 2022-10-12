/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:15:31 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/12 19:32:18 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handl(char c,)
{
	int	lenght;

	lenght = 0;
	if (c == 'c')
		lenght += ft_printf_char(va_arg(args, char));
	else if (c == 's')
		lenght += ft_printf_str(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		lenght += ft_printf_base(va_arg(args, int), DEC_BASE);
	else if (c == 'x')
		lenght += ft_printf_base(va_arg(args, unsigned long int), HEX_S_BASE);
	else if (c == 'X')
		lenght += ft_printf_base(va_arg(args, unsigned long int), HEX_B_BASE);
	else if (c == 'u')
		lenght += ft_printf_base(va_arg(args, unsigned long int), DEC_BASE);
	else if (c == 'p')
	{
		lenght += ft_printf_str(START_POINTER);
		lenght += ft_printf_base(va_arg(args, long int), HEX_S_BASE);
	}
	else
		lenght += ft_printf_char(c);
	return (lenght);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		lengh;

	lengh = 0;
	i = -1;
	va_start(args, str);
	while (str[++i])
	{
		if (str[i] == '%')
			lengh += handl(str[i + 1]);
		else
			lengh += ft_printf_char(str[i]);
	}
	end_list(args);
	return (lengh);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:29:27 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/12 22:56:06 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_printf_base(long int n, char *s)
{
	int			lenght;

	lenght = 0;
	if (n < 0)
	{
		lenght += ft_printf_char('-');
		lenght += ft_printf_base(n * -1, s);
	}
	else if (n < ft_strlen(s) && n >= 0)
		lenght += ft_printf_char(s[n]);
	else
	{
		lenght += ft_printf_base(n / ft_strlen(s), s);
		lenght += ft_printf_base(n % ft_strlen(s), s);
	}
	return (lenght);
}

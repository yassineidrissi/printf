/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:47:26 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/13 20:41:46 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf_nbr(long long int n)
{
	int	lenght;

	lenght = 0;
	if (n <= INT_MIN)
		return (ft_printf_char('-') + ft_printf_nbr((n / 1000000) * -1) + \
		ft_printf_nbr((n % 1000000) * -1));
	if (n >= INT_MAX)
		return (ft_printf_nbr(n / 1000000) + ft_printf_nbr(n % 1000000));
	if (n < 0)
	{
		lenght += ft_printf_char('-');
		lenght += ft_printf_nbr(n * -1);
		return (lenght);
	}
	else if (n < 10)
		return (ft_printf_char(DEC_BASE[n]));
	else
		return (ft_printf_nbr(n / 10) + ft_printf_nbr(n % 10));
}

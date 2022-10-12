/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:52:04 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/12 17:58:17 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf_str(const char *s)
{
	int	lengh;
	int	i;

	lengh = 0;
	i = -1;
	while (s[++i])
		lengh += ft_printf_char(s);
	return (lengh);
}

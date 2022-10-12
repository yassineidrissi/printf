/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:52:04 by yaidriss          #+#    #+#             */
/*   Updated: 2022/10/12 22:26:10 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_printf_str(char *s)
{
	int	lengh;
	int	i;

	lengh = 0;
	i = 0;
	while (s[i])
		lengh += ft_printf_char(s[i++]);
	return (lengh);
}

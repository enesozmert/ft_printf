/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ud.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:57:55 by eozmert           #+#    #+#             */
/*   Updated: 2022/03/08 13:58:06 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

static int	ft_print_ud_lib(unsigned int d)
{
	int		len;
	int		i;
	char	*str;

	len = ft_count_digits_ud(d, 10);
	i = 0;
	if (d == 0)
	{
		ft_write('0');
		return (1);
	}
	str = ft_uitoa(d);
	while (str[i])
		write(1, &str[i++], 1);
	free(str);
	return (len);
}

int	ft_print_ud(va_list list)
{
	unsigned int	num;

	num = va_arg(list, unsigned int);
	if (num == 0)
		return (ft_print_ud_lib(num));
	if (num < 1)
		return (-1);
	return (ft_print_ud_lib(num));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:06:14 by eozmert           #+#    #+#             */
/*   Updated: 2022/03/08 12:07:34 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_print_d(va_list va)
{
	int		len;
	int		d;
	int		i;
	char	*str;

	d = va_arg(va, int);
	len = ft_count_digits(d, 10);
	i = 0;
	if (d == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	str = ft_itoa(d);
	while (str[i])
		write(1, &str[i++], 1);
	free(str);
	return (len);
}

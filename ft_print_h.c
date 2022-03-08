/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_h.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:53:18 by eozmert           #+#    #+#             */
/*   Updated: 2022/03/08 12:12:44 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_print_ux(va_list va)
{
	char	*hexa;

	hexa = "0123456789ABCDEF";
	return (ft_print_hex(va, hexa));
}

int	ft_print_x(va_list va)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	return (ft_print_hex(va, hexa));
}

int	ft_print_hex(va_list va, char *hexa)
{
	unsigned long long	num;
	unsigned int		len;

	num = va_arg(va, unsigned long long);
	ft_hex(num, hexa);
	len = ft_count_digits_ud(num, 16);
	return (len);
}

void	ft_hex(unsigned int num, char *hexa)
{
	if (num >= 16)
		ft_hex((num / 16), hexa);
	ft_write(hexa[num % 16]);
}

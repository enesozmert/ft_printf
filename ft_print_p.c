/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:53:15 by eozmert           #+#    #+#             */
/*   Updated: 2022/03/08 12:13:35 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_print_p(va_list va)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	return (ft_print_ptr(va, hexa));
}

int	ft_print_ptr(va_list va, char *hexa)
{
	unsigned long long	num;
	unsigned int		len;

	num = va_arg(va, unsigned long long);
	ft_write('0');
	ft_write('x');
	ft_ptr(num, hexa);
	len = ft_count_digits_llud(num, 16);
	return (len + 2);
}

void	ft_ptr(unsigned long long num, char *hexa)
{
	if (num >= 16)
		ft_ptr((num / 16), hexa);
	ft_write(hexa[num % 16]);
}

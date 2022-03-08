/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_digits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 10:09:44 by eozmert           #+#    #+#             */
/*   Updated: 2022/03/08 12:05:56 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_count_digits(int value, int base)
{
	int	result;

	result = 0;
	if (value == 0)
		return (1);
	if (value <= 0)
	{
		result++;
		value = -value;
	}
	while (value != 0)
	{
		value /= base;
		result++;
	}
	return (result);
}

int	ft_count_digits_ud(unsigned int value, int base)
{
	int	result;

	result = 0;
	if (value == 0)
		return (1);
	if (value <= 0)
	{
		result ++;
		value = -value;
	}
	while (value != 0)
	{
		value /= base;
		result++;
	}
	return (result);
}

int	ft_count_digits_llud(unsigned long long value, int base)
{
	int	result;

	result = 0;
	if (value == 0)
		return (1);
	if (value <= 0)
	{
		result ++;
		value = -value;
	}
	while (value != 0)
	{
		value /= base;
		result++;
	}
	return (result);
}

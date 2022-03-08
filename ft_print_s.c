/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozmert <eozmert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:21:32 by eozmert           #+#    #+#             */
/*   Updated: 2022/03/08 12:21:42 by eozmert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_print_s(va_list va)
{
	int		i;
	int		len;
	char	*s;

	i = 0;
	s = va_arg(va, char *);
	if (s == NULL)
	{
		write (1, "(null)", 6);
		return (6);
	}
	if (s != 0)
	{
		while (s[i])
		{
			ft_write(s[i]);
			i++;
		}
	}
	len = ft_strlen(s);
	return (len);
}

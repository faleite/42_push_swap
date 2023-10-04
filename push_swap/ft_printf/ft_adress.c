/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:05:41 by faaraujo          #+#    #+#             */
/*   Updated: 2023/05/14 14:46:59 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_adress(unsigned long n)
{
	int	len;

	len = 0;
	if (n == 0)
		len += write(1, "(nil)", 5);
	else
	{
		len += write(1, "0x", 2);
		len += ft_hexa(n, HEXALOW);
	}
	return (len);
}

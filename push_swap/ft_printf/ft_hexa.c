/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 13:01:35 by faaraujo          #+#    #+#             */
/*   Updated: 2023/05/14 16:58:31 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_hexa(unsigned long n, char *type_case)
{
	int	len;

	len = 0;
	if (n < 16)
		len += write(1, &type_case[n], 1);
	else
	{
		len += ft_hexa((n / 16), type_case);
		len += ft_hexa((n % 16), type_case);
	}
	return (len);
}

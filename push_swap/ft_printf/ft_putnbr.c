/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:18:55 by faaraujo          #+#    #+#             */
/*   Updated: 2023/05/14 16:46:55 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_putnbr(int n)
{
	unsigned int	nb;
	int				len;

	len = 0;
	nb = n;
	if (n < 0)
	{
		len += write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		len += write(1, &"0123456789"[nb], 1);
	}
	else
	{
		len += ft_putnbr((nb / 10));
		len += ft_putnbr((nb % 10));
	}
	return (len);
}

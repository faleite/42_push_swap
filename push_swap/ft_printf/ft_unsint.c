/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 21:29:36 by faaraujo          #+#    #+#             */
/*   Updated: 2023/05/11 21:54:05 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_unsint(unsigned int n)
{
	int	len;

	len = 0;
	if (n < 10)
		len += write(1, &"0123456789"[n], 1);
	else
	{
		len += ft_unsint((n / 10));
		len += ft_unsint((n % 10));
	}
	return (len);
}

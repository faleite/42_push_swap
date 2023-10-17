/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigger_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:58:59 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/17 21:41:25 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sort_bigger(t_stack **a, t_stack **b)
{
	len_sum((*a));
	while (data()->s_len > 5)
	{
		data()->s_len = 0;
		data()->s_sum = 0;
		if ((*a)->x < data()->mean)
			pb(a, b);
		else
			ra(a);
		len_sum((*a));
	}
	sort_5(a, b);
	return (data()->moves);
}

/*
ft_printf("Soma: %d\n", data()->s_sum);
ft_printf("Tamanho: %d\n", data()->s_len);
ft_printf("Média: %d\n", data()->mean);
*/
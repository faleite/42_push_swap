/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:58:44 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/16 21:31:20 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorting(t_stack **a, t_stack **b)
{
	len_sum(*a);
	if (data()->s_len == 1)
		return ;
	else if (data()->s_len == 2)
		sort_2(a);
	else if (data()->s_len == 3)
		sort_3(a);
	else if (data()->s_len == 4)
		sort_4(a, b);
	else if (data()->s_len == 5)
		sort_5(a, b);
}

int	sort_2(t_stack **a)
{
	if ((*a)->x > (*a)->next->x)
	{
		swap(a);
		write(2, "sa\n", 3);
		data()->moves++;
	}
	return (data()->moves);
}

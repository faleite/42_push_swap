/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigger_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:58:59 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/19 22:33:54 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_bigger(t_stack **a, t_stack **b)
{
	int	s_len;
	int	s_sum;
	int	mean;

	s_len = struct_len(*a);
	while (s_len > 5)
	{
		s_sum = struct_sum(*a);
		mean = s_sum / s_len;
		if ((*a)->nbr < mean)
			pb(a, b);
		else
			ra(a);
		s_len = struct_len(*a);
	}
	sort_5(a, b);
	add_best_friend(*a, b);
	add_index(a);
	add_index(b);
	printf("%d\n", get_moves(*a, (*a)->next->index));
}

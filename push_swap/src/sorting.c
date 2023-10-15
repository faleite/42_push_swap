/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:58:44 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/15 16:31:42 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorting(t_stack **a, t_stack **b)
{
	len_sum(*a);
	(void)(*b);
	if (data()->s_len == 1)
		return ;
	else if (data()->s_len == 2)
		sort_2(a);
}

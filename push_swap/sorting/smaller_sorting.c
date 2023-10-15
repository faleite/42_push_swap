/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smaller_sorting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:41:54 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/15 21:02:17 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

int	sort_3(t_stack **a)
{
	if ((*a)->x > (*a)->next->x && \
		(*a)->x > (*a)->next->next->x)
		ra(a);
	if ((*a)->next->x > (*a)->next->next->x)
		rra(a);
	if ((*a)->next->x < (*a)->x)
		sa(a);
	return (data()->moves);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smaller_sorting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:41:54 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/16 21:44:11 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

int	sort_4(t_stack **a, t_stack **b)
{
	pb(a, b);
	sort_3(a);
	if (!((*b)->x > (*a)->next->x && \
		(*b)->x < (*a)->next->next->x))
		pa(b, a);
	else
		pos_4(a, b);
	if ((*a)->x > (*a)->next->x && \
		(*a)->x < (*a)->next->next->x)
		sa(a);
	if ((*a)->x > (*a)->next->next->x)
		ra(a);
	return (data()->moves);
}

int	sort_5(t_stack **a, t_stack **b)
{
	pb(a, b);
	sort_4(a, b);
	if ((*b)->x > (*a)->next->x && \
		(*b)->x < (*a)->next->next->x)
		pos_3(a, b);
	else if ((*b)->x > (*a)->next->next->x && \
		(*b)->x < (*a)->next->next->next->x)
		pos_4(a, b);
	else if ((*b)->x < (*a)->x)
		pa(b, a);
	else if ((*b)->x > (*a)->x && \
		(*b)->x < (*a)->next->x)
	{
		pa(b, a);
		sa(a);
	}
	else if ((*b)->x > (*a)->next->next->x)
	{
		pa(b, a);
		ra(a);
	}
	return (data()->moves);
}

void	pos_3(t_stack **a, t_stack **b)
{
	rra(a);
	rra(a);
	pa(b, a);
	ra(a);
	ra(a);
	ra(a);
}

void	pos_4(t_stack **a, t_stack **b)
{
	rra(a);
	pa(b, a);
	ra(a);
	ra(a);
}

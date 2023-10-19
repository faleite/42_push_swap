/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smaller_sorting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:41:54 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/19 18:21:06 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_3(t_stack **a)
{
	if ((*a)->nbr > (*a)->next->nbr && \
		(*a)->nbr > (*a)->next->next->nbr)
		ra(a);
	if ((*a)->next->nbr > (*a)->next->next->nbr)
		rra(a);
	if ((*a)->next->nbr < (*a)->nbr)
		sa(a);
}

void	sort_4(t_stack **a, t_stack **b)
{
	pb(a, b);
	sort_3(a);
	if (!((*b)->nbr > (*a)->next->nbr && \
		(*b)->nbr < (*a)->next->next->nbr))
		pa(b, a);
	else
		pos_4(a, b);
	if ((*a)->nbr > (*a)->next->nbr && \
		(*a)->nbr < (*a)->next->next->nbr)
		sa(a);
	if ((*a)->nbr > (*a)->next->next->nbr)
		ra(a);
}

void	sort_5(t_stack **a, t_stack **b)
{
	pb(a, b);
	sort_4(a, b);
	if ((*b)->nbr > (*a)->next->nbr && \
		(*b)->nbr < (*a)->next->next->nbr)
		pos_3(a, b);
	else if ((*b)->nbr > (*a)->next->next->nbr && \
		(*b)->nbr < (*a)->next->next->next->nbr)
		pos_4(a, b);
	else if ((*b)->nbr < (*a)->nbr)
		pa(b, a);
	else if ((*b)->nbr > (*a)->nbr && \
		(*b)->nbr < (*a)->next->nbr)
	{
		pa(b, a);
		sa(a);
	}
	else if ((*b)->nbr > (*a)->next->next->nbr)
	{
		pa(b, a);
		ra(a);
	}
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

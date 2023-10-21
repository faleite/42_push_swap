/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 20:20:41 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/21 15:34:30 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	moves_top(t_stack **a, t_stack **b)
{
	t_stack	*curr;

	curr = *b;
	while (curr)
	{
		if (curr->cost == cost_win(*b))
		{
			rotation_a(a, curr->best);
			rotation_b(b, curr->index);
			pa(b, a);
			break ;
		}
		curr = curr->next;
	}
}

int	cost_win(t_stack *b)
{
	int		cost;
	t_stack	*curr;

	cost = INT_MAX;
	curr = b;
	while (curr)
	{
		if (curr->cost < cost)
			cost = curr->cost;
		curr = curr->next;
	}
	return (cost);
}

void	rotation_a(t_stack **a, int index)
{
	int	rotation;
	int	rrotation;
	int	len;

	len = struct_len(*a) + 1;
	rotation = index - 1;
	rrotation = len - index;
	if (rotation < rrotation)
	{
		while (rotation)
		{
			ra(a);
			rotation--;
		}
	}
	else
	{
		while (rrotation)
		{
			rra(a);
			rrotation--;
		}
	}
}

void	rotation_b(t_stack **b, int index)
{
	int	rotation;
	int	rrotation;
	int	len;

	len = struct_len(*b) + 1;
	rotation = index - 1;
	rrotation = len - index;
	if (rotation < rrotation)
	{
		while (rotation)
		{
			rb(b);
			rotation--;
		}
	}
	else
	{
		while (rrotation)
		{
			rrb(b);
			rrotation--;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:57:27 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/16 17:55:52 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*head;

	if (!(*src))
		return ;
	head = *src;
	*src = (*src)->next;
	head->next = *dst;
	*dst = head;
}

void	pb(t_stack **a, t_stack **b)
{
	push(a, b);
	data()->moves++;
	write(2, "pb\n", 3);
}

void	pa(t_stack **b, t_stack **a)
{
	push(b, a);
	data()->moves++;
	write(2, "pa\n", 3);
}

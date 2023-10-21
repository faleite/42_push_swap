/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:58:44 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/21 15:18:27 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorting(t_stack **a, t_stack **b)
{
	t_stack	*curr;
	int		len;

	curr = *a;
	len = 0;
	while (curr != NULL && ++len)
		curr = curr->next;
	if (len == 1)
		return ;
	else if (len == 2)
		sort_2(a);
	else if (len == 3)
		sort_3(a);
	else if (len == 4)
		sort_4(a, b);
	else if (len == 5)
		sort_5(a, b);
	else if (len > 5)
		sort_bigger(a, b);
}

void	sort_2(t_stack **a)
{
	if ((*a)->nbr > (*a)->next->nbr)
		sa(a);
}

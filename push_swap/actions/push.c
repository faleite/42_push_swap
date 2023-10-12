/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:57:27 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/12 21:45:06 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*first;
	t_stack	*curr;

	if (!src)
		return ;
	first = *src;
	curr = (*src)->next;
	*src = curr;
	first->next = *dst;
	*dst = first;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:57:27 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/15 14:04:34 by faaraujo         ###   ########.fr       */
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

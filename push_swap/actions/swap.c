/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:43:53 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/11 18:34:08 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_stack **node)
{
	int	tmp;
	
	if (!node || !(*node)->next)
		return ;
	tmp = (*node)->x;
	(*node)->x = (*node)->next->x;
	(*node)->next->x = tmp;
}
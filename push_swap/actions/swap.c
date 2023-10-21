/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:43:53 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/21 17:58:45 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_stack **node)
{
	int	tmp;

	if (!(*node) || !(*node)->next)
		return ;
	tmp = (*node)->nbr;
	(*node)->nbr = (*node)->next->nbr;
	(*node)->next->nbr = tmp;
}

void	sa(t_stack **node)
{
	swap(node);
	write(1, "sa\n", 3);
}

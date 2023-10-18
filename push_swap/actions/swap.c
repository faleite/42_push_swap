/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:43:53 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/18 19:29:17 by faaraujo         ###   ########.fr       */
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
	data()->moves++;
	write(2, "sa\n", 3);
}

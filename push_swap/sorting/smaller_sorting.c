/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smaller_sorting.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:41:54 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/15 16:31:10 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sort_2(t_stack **a)
{
	if ((*a)->x > (*a)->next->x)
	{
		swap(a);
		write(2, "sa\n", 3);
		return (1);
	}
	return (0);
}
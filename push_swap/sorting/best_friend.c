/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_friend.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:43:37 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/18 21:46:04 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	best_friend(t_stack *a, int nbr_b)
{
	int	friend;
	int	best;
	int	temp;

	friend = INT_MAX;
	best = INT_MAX;
	while (a)
	{
		temp = a->nbr - nbr_b;
		if (temp < friend && a->nbr > nbr_b)
		{
			friend = temp;
			best = a->nbr;
		}
		a = a->next;
	}
	if (best == INT_MAX)
		return (-1);
	return (best);
}

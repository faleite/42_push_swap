/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:04:46 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/11 21:47:49 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;

	if (argc == 1)
		exit(1);
	null_args(argv);
	if (argc == 2)
		argv = ft_split(argv[1]);
	check_args(argc, argv);
	a = add_data(argc, argv);
	rrotate(&a);
	print_data(a);
	free_arr(argc, argv);
	free_stack(&a);
	return (0);
}

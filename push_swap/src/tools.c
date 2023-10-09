/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 15:40:42 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/09 20:14:19 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// t_data	*data(void)
// {
// 	static t_data	d;

// 	return (&d);
// }

void	err_case(int argc, char **argv)
{
	ft_printf("Error\n");
	free_arr(argc, argv);
	exit(1);
}

void	free_arr(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 2)
		return ;
	while (argv && argv[i])
		free(argv[i++]);
	free(argv);
}

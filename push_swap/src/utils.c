/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:03:11 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/04 21:42:42 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int validate_arguments(char *argv[])
{
    int i;
    int j;

    i = 1;
    while (argv && argv[i])
    {
        j = 0;
        if (argv[i][j] == '-' || argv[i][j] == '+')
            j++;
        while (argv[i][j])
        {
            if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

void    err_case(void)
{
    ft_printf("Error\n");
	exit(1);
}

void    check_args(int argc, char *argv[])
{
    if (argc == 1 || !argv[1][0])
		exit(1);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	if (validate_arguments(argv))
		err_case();
}
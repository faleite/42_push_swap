/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 19:03:11 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/09 21:45:49 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	check_args(int argc, char **argv)
{
	if (argc == 1)
		exit(1);
	null_args(argv);
	if (argc == 2)
		argv = ft_split(argv[1]);
	validate_arguments(argc, argv);
	check_double(argc, argv);
	check_len(argc, argv);
	check_int_max(argc, argv);
	add_data(argc, argv);
	free_arr(argc, argv);
}

void	validate_arguments(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc == 2)
		i = 0;
	while (argv && argv[i])
	{
		j = 0;
		if (argv[i][j] == '-' || argv[i][j] == '+')
			j++;
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				err_case(argc, argv);
			j++;
		}
		i++;
	}
}

void	check_double(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	while (argv && argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (!ft_strcmp(argv[i], argv[j]))
				err_case(argc, argv);
			j++;
		}
		i++;
	}
}

void	check_len(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv && argv[i])
	{
		if (ft_strlen(argv[i]) > 11 && (argv[i][0] == '-' || argv[i][0] == '+'))
			err_case(argc, argv);
		if (argv[i][0] >= '0' && argv[i][0] <= '9')
		{
			if (ft_strlen(argv[i]) > 10)
				err_case(argc, argv);
		}
		i++;
	}
}

void	null_args(char **argv)
{
	int	i;

	i = 0;
	while (argv && argv[i])
	{
		if (!argv[i][0])
		{
			ft_printf("Error\n");
			exit(1);
		}
		i++;
	}
}

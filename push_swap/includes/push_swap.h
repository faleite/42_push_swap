/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:57:09 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/05 16:31:50 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include "stdlib.h" // malloc, free, exit
# include "unistd.h" // write, read, close
# include "limits.h" // INT_MAX, INT_MIN
# include "stdio.h" // perror, printf

/* Utils */
char	**ft_split(char const *s, char c);
void	err_case(void);
void	check_args(int argc, char *argv[]);
int		validate_arguments(char *argv[]);

#endif /* PUSH_SWAP_H */
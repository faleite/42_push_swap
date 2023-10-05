/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:57:09 by faaraujo          #+#    #+#             */
/*   Updated: 2023/10/05 21:24:10 by faaraujo         ###   ########.fr       */
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
int		ft_strcmp(char *s1, char *s2);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *s);

/* Check Arguments*/
int		validate_arguments(int argc, char **argv);
int		check_double(char **argv);
int		check_len(char **argv);
void	err_case(int argc, char **argv);
void	check_args(int argc, char **argv);
void	free_arr(int argc, char **argv);

#endif /* PUSH_SWAP_H */
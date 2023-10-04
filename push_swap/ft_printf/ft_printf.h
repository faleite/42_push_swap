/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaraujo <faaraujo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:18:44 by faaraujo          #+#    #+#             */
/*   Updated: 2023/05/14 16:29:18 by faaraujo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

# define HEXALOW "0123456789abcdef"
# define HEXAHIG "0123456789ABCDEF"

/**
 * @brief The printf utility formats and prints its arguments, after the first, 
 * under control of the format. The format is a character string which contains
 * three types of objects: plain characters, which are simply copied to	standard
 * output, character escape sequences which are converted and copied to the 
 * standard output, and	format specifications, each of which causes printing of	
 * the next successive argument.
 * */
int	ft_printf(const char *param, ...);

/**
 * @brief Outputs the character ’c’ to the given file descriptor.
 * @param c The character to output.
 * @return The length of character.
*/
int	ft_putchar(char c);

/**
 * @brief Outputs the string ’s’ to the given file descriptor.
 * @param s The string to output.
 * @return The length of string.
*/
int	ft_putstr(char *s);

/**
 * @brief Outputs the integer ’n’ to the given file descriptor.
 * @param n The integer to output.
 * @return The length of number.
*/
int	ft_putnbr(int n);

/**
 * @brief Outputs the unsigned integer ’n’ to the given file descriptor.
 * @param n The unsigned integer to output.
 * @return The length of number.
*/
int	ft_unsint(unsigned int n);

/**
 * @brief Outputs the hexadecimal number to given file descriptor
 * @param n The unsigned long int to output
 * @return The length of number.
 * */
int	ft_adress(unsigned long n);

/**
 * @brief Output a number in hexadecimal lowercase and uppercase format.
 * @param n number to convert
 * @param type_case a sequence list of base 16 number 
 * @return The length of number.
 * */
int	ft_hexa(unsigned long n, char *type_case);

#endif /* FT_PRINTF_H */

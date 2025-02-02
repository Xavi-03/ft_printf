/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtinaut- <jtinaut-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:36:19 by jtinaut-          #+#    #+#             */
/*   Updated: 2024/09/29 15:12:59 by jtinaut-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int				ft_printf(char const *format, ...);
int				ft_conversor_caller(char type, va_list args);
int				ft_text_char(va_list args);
int				ft_text_str(va_list args);
int				ft_hex_void(va_list args);
int				ft_nbr_dec(va_list args);
int				ft_nbr_int(va_list args);
int				ft_nbr_unsigned(va_list args);
int				ft_hex_low(va_list args);
int				ft_hex_up(va_list args);
int				ft_utils_nbr_counter(int int_value, int base);
unsigned long	ft_counter_unsigned(unsigned long int_value, unsigned int base);
int				ft_putchar(char c);
int				ft_putstr(char *str);
void			ft_putnbr(int int_value);
char			*ft_itoa_base(int nbr, char *base_char);
char			*ft_itoa_base_unsigned(unsigned long nbr, char *base_char);
int				ft_strlen_printf(const char *s);

#endif

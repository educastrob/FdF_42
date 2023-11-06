/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:58:08 by edcastro          #+#    #+#             */
/*   Updated: 2023/11/06 11:58:08 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define DEC		"0123456789"
# define HEX_LOWER	"0123456789abcdef"
# define HEX_UPPER	"0123456789ABCDEF"

typedef struct s_print
{
	va_list	args;
	int		hash;
	int		width;
	int		precision;
	char	padding;
	int		point;
	int		dash;
	int		len;
	int		sign;
	int		space;
	int		neg;
}				t_print;

/* ft_printf.c*/
int				ft_printf(const char *format, ...);
/* read_modifiers.c*/
int				read_flags(t_print *tab, const char *format, int i);
int				read_width(t_print *tab, const char *format, int i);
int				read_precision(t_print *tab, const char *format, int i);
/* conversions.c */
void			ft_parse_char(t_print *tab);
void			ft_parse_str(t_print *tab);
void			ft_parse_int(t_print *tab);
void			ft_parse_uns(t_print *tab);
/* conversions_hex.c */
void			ft_parse_hex(t_print *tab, char *base, char *zerox);
void			ft_parse_pnt(t_print *tab);
/* conversions_utils.c */
int				ft_atoi_start_to_end(const char *str, int start, int end);
unsigned int	ft_numdigits(size_t nbr, unsigned int baselen);
/* put_conversions.c */
unsigned int	ft_putstr(char *str, int strlen);
unsigned int	ft_putnbr_base(ssize_t nbr, char *base);
int				put_padding(char c, int len);
int				put_sign_or_space(t_print *tab);
/* utils.c */
unsigned int	ft_strlen(const char *str);
int				is_in_set(const char c, const char *set);
int				printf_min(int a, int b);
int				printf_max(int a, int b);

#endif

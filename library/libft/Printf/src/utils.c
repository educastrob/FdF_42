/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:58:40 by edcastro          #+#    #+#             */
/*   Updated: 2023/11/06 11:58:40 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

unsigned int	ft_strlen(const char *str)
{
	int	len;

	if (str == NULL)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	is_in_set(const char c, const char *set)
{
	while (*set && *set != c)
		set++;
	return (*set == c);
}

int	printf_min(int a, int b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

int	printf_max(int a, int b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

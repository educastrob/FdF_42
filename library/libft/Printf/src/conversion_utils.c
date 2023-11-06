/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:58:13 by edcastro          #+#    #+#             */
/*   Updated: 2023/11/06 11:58:13 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_atoi_start_to_end(const char *str, int start, int end)
{
	int	nbr;
	int	power;

	nbr = 0;
	power = 1;
	while (--end >= start)
	{
		nbr += power * (str[end] - '0');
		power *= 10;
	}
	return (nbr);
}

unsigned int	ft_numdigits(size_t nbr, unsigned int baselen)
{
	unsigned int	count;

	if (baselen < 2)
		return (0);
	if (nbr == 0)
		return (1);
	count = 0;
	while (nbr > 0)
	{
		nbr /= baselen;
		count++;
	}
	return (count);
}

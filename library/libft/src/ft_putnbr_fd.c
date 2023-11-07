/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:05:06 by edcastro          #+#    #+#             */
/*   Updated: 2023/11/04 10:05:07 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static void	recursion(unsigned int nb, int fd)
{
	char	c;

	if (nb > 9)
		recursion(nb / 10, fd);
	c = nb % 10 + '0';
	ft_putchar_fd(c, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = (unsigned int)(n * -1);
	}
	else
		nb = (unsigned int) n;
	recursion(nb, fd);
}

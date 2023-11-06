/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:59:24 by edcastro          #+#    #+#             */
/*   Updated: 2023/11/06 12:59:24 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;
	unsigned char	uc;

	t = (unsigned char *) s;
	uc = (unsigned char) c;
	while (n--)
	{
		if (*t == uc)
			return ((char *) t);
		t++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:04:32 by edcastro          #+#    #+#             */
/*   Updated: 2023/11/04 10:04:32 by edcastro         ###   ########.fr       */
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

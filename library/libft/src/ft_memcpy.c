/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:04:42 by edcastro          #+#    #+#             */
/*   Updated: 2023/11/04 10:04:42 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str_dest;
	unsigned char	*str_src;

	if (dest == NULL && src == NULL)
		return (NULL);
	str_dest = (unsigned char *) dest;
	str_src = (unsigned char *) src;
	while (n-- > 0)
		*str_dest++ = *str_src++;
	return (dest);
}

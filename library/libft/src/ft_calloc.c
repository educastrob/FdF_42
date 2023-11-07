/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:03:25 by edcastro          #+#    #+#             */
/*   Updated: 2023/11/04 10:03:25 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	s;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	s = nmemb * size;
	if (s / size != nmemb)
		return (NULL);
	ptr = malloc(s);
	if (ptr != NULL)
		ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}

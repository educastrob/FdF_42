/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:01:11 by edcastro          #+#    #+#             */
/*   Updated: 2023/11/06 13:01:11 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int	match(const char *big, const char *little, size_t len)
{
	while (len && *big == *little)
	{
		if (*big == '\0')
			return (1);
		big++;
		little++;
		len--;
	}
	return (*little == '\0');
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little == 0)
		return ((char *) big);
	while (len && *big)
	{
		if (match(big, little, len))
			return ((char *) big);
		big++;
		len--;
	}
	return (NULL);
}

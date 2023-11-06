/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:01:16 by edcastro          #+#    #+#             */
/*   Updated: 2023/11/06 13:01:16 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*t;

	t = NULL;
	while (*s != '\0')
	{
		if (*s == (unsigned char) c)
			t = s;
		s++;
	}
	if ((unsigned char) c == '\0')
		t = s;
	return ((char *) t);
}

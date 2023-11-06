/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:00:23 by edcastro          #+#    #+#             */
/*   Updated: 2023/11/06 13:00:24 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		size;

	size = 0;
	while (s && s[size])
		size++;
	size++;
	copy = malloc(size * sizeof(char));
	if (copy == NULL)
		return (NULL);
	while (size--)
		copy[size] = s[size];
	return (copy);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:05:23 by edcastro          #+#    #+#             */
/*   Updated: 2023/11/04 10:05:24 by edcastro         ###   ########.fr       */
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

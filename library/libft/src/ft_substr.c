/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:01:29 by edcastro          #+#    #+#             */
/*   Updated: 2023/11/06 13:01:30 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static size_t	printf_min(size_t a, size_t b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

static char	*empty_string(void)
{
	char	*str;

	str = malloc(1);
	if (str == NULL)
		return (NULL);
	*str = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	slen;
	size_t	sublen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (empty_string());
	sublen = printf_min(len, slen - start);
	substr = malloc(sublen + 1);
	if (substr == NULL)
		return (NULL);
	substr[sublen] = '\0';
	i = start;
	while (sublen-- && s[i])
	{
		substr[i - start] = s[i];
		i++;
	}
	return (substr);
}

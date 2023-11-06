/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edcastro <edcastro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:01:20 by edcastro          #+#    #+#             */
/*   Updated: 2023/11/06 13:01:20 by edcastro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

static int	isinset(char const c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

static void	prep(char const *s1, char const *set, int *begin, int *end)
{
	*begin = 0;
	while (s1[*begin] && isinset(s1[*begin], set))
		(*begin)++;
	*end = *begin;
	while (s1[*end])
		(*end)++;
	while (s1[*end - 1] && isinset(s1[*end - 1], set))
		(*end)--;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int		begin;
	int		end;
	int		i;

	if (set == NULL || s1 == NULL)
		return ((char *) s1);
	prep(s1, set, &begin, &end);
	if (begin >= end)
		trim = malloc(1);
	else
		trim = malloc(end - begin + 1);
	if (trim == NULL)
		return (NULL);
	i = begin;
	while (i < end)
	{
		trim[i - begin] = s1[i];
		i++;
	}
	trim[i - begin] = '\0';
	return (trim);
}

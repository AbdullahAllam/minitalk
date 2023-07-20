/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abali <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:25:38 by abali             #+#    #+#             */
/*   Updated: 2023/01/14 16:32:09 by abali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (0);
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	while (count(s1[start], set) == 0)
		start++;
	if (start == ft_strlen(s1))
	{
		result = ft_strdup("");
		if (!(result))
			return (NULL);
		else
			return (result);
	}
	while (count(s1[end - 1], set) == 0)
		end--;
	result = ft_substr(s1, start, end - start);
	return (result);
}
/*
int main()
{
    char s1[] = "  hell  p";
    char set[] = " p"; 
    printf("%s", ft_strtrim("", "123")));
    return (0);
}*/

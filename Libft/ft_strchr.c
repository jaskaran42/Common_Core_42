/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy < jmehmy@student.42lisboa.com >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:52:35 by jmehmy            #+#    #+#             */
/*   Updated: 2024/11/14 18:03:02 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)(s + i));
}
/*
int main ()
{
	const char *str = "Hello World";
	char ch = 'o';
	char *result = ft_strchr(str, ch);
	if (result)
		printf ("character '%c' found at position: %ld\n", ch, result-str);
	else
		printf ("character '%c' not found. \n", ch);
	result = ft_strchar(str, '\0');
	if (result)
		printf ("Null terminator found at postion %ld\n", result - str);
	return (0);
	}*/
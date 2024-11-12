/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:34:28 by jmehmy            #+#    #+#             */
/*   Updated: 2024/11/09 20:34:51 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((unsigned char *)s) + i);
		i++;
	}
	return (NULL);
}
/*
int main ()
{
	const char *str = "Hello World";
	char ch = 'W';
	char *result = ft_memchr(str, ch, ft_strlen(str));

	if (result)
		printf ("character '%c' found at position: %ld\n", ch, result-str);
	else
		printf ("character '%c' not found. \n", ch);

}*/

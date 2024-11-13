/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy < jmehmy@student.42lisboa.com >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 18:01:29 by jmehmy            #+#    #+#             */
/*   Updated: 2024/11/13 19:57:05 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (dest > src)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*#include <stdio.h>

int	main(void) {
	char dest[] = "Hello, World!";
	ft_memmove(dest + 7, dest, 5);

	printf("dest %s\n", dest);

	char dest1[] = "Hello, World!";

	ft_memmove(dest1, dest1 + 7, 6);
	printf("dest1 %s\n", dest1);

	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy < jmehmy@student.42lisboa.com >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:16:15 by jmehmy            #+#    #+#             */
/*   Updated: 2024/11/06 17:35:42 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
		char c1 = '4';
		char c2 = 'a';
		char c3 = 'Z';

		if(ft_isdigit(c1))
			printf("%c is digit character \n", c1);
		else
			printf("%c is not a digit character \n", c1);

		if(ft_isdigit(c2))

			printf("%c is  digit character \n", c2);
		else
			printf("%c is not a digit character \n", c2);

		if(ft_isdigit(c3))

			printf("%c is  digit character \n", c3);
		else
			printf("%c is not a digit character \n", c3);
}*/
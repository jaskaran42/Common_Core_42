/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy < jmehmy@student.42lisboa.com >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 18:24:19 by jmehmy            #+#    #+#             */
/*   Updated: 2024/11/09 17:01:52 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_num(int num)
{
	int	position;

	position = 0;
	if (num <= 0)
		position++;
	while (num != 0)
	{
		num = num / 10;
		position++;
	}
	return (position);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		position;
	int		length;
	long	num;

	num = n;
	length = ft_count_num(num);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[length] = '\0';
	position = length - 1;
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 9)
	{
		str[position] = (num % 10) + '0';
		num = num / 10;
		position--;
	}
	str[position] = num + '0';
	return (str);
}

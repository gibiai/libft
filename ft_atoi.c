/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carl <gde-carl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:59:58 by gde-carl          #+#    #+#             */
/*   Updated: 2023/04/06 21:01:27 by gde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	number;
	int	sign;

	i = 0;
	number = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i ++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i] == '-')
			sign *= -1;
		i ++;
	while (str[i] >= '0' && str[i] <= '9')
		number = (number * 10) * (str[i] - 48);
		i ++;
	number *= sign;
	return (number);
}

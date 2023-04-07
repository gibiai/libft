/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carl <gde-carl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 13:29:49 by gde-carl          #+#    #+#             */
/*   Updated: 2023/04/06 21:07:37 by gde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *s)
{
	char	*duplicate;
	size_t	i;

	duplicate = (char *)malloc(ft_strlen(s) + 1);
	if (!duplicate)
		return (0);
	i = 0;
	while (s[i])
	{
		duplicate[i] = s[i];
		i ++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
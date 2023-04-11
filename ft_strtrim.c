/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-carl <gde-carl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 01:56:16 by gde-carl          #+#    #+#             */
/*   Updated: 2023/04/07 19:44:58 by gde-carl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{	
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	j = 0;
	k = 0;
	if (!s1 || !set)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i ++;
	while (s1[i])
		str[j++] = s1[i++];
	str[j] = '\0';
	k = ft_strlen(str) - 1;
	while (k >= 0 && ft_strchr(set, str[k]))
		str[k--] = '\0';
	return (str);
}

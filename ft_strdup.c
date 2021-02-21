/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 19:58:52 by kpetrosy          #+#    #+#             */
/*   Updated: 2021/01/25 19:58:56 by kpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		idx;
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	idx = 0;
	while (str[idx])
	{
		dest[idx] = str[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

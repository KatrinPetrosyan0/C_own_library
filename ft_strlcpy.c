/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:00:23 by kpetrosy          #+#    #+#             */
/*   Updated: 2021/01/25 20:29:10 by kpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		idx;
	size_t		count;

	idx = 0;
	count = 0;
	if (!dest || !src)
		return (0);
	while (src[count])
		count++;
	while (src[idx] && idx + 1 < size)
	{
		dest[idx] = src[idx];
		idx++;
	}
	if (size)
		dest[idx] = '\0';
	return (count);
}

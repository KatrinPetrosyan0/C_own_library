/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:41:38 by kpetrosy          #+#    #+#             */
/*   Updated: 2021/01/25 18:56:20 by kpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		idx;

	idx = 0;
	while (idx < n)
	{
		if (*((unsigned char *)s1 + idx) ==
				*((unsigned char *)s2 + idx))
			idx++;
		else
			return ((*((unsigned char *)s1 + idx)) -
						*((unsigned char *)s2 + idx));
	}
	return (0);
}

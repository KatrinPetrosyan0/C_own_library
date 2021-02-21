/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 19:41:15 by kpetrosy          #+#    #+#             */
/*   Updated: 2021/01/25 19:41:46 by kpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t		idx;

	idx = 0;
	while (idx < n)
	{
		*((unsigned char *)str + idx) = c;
		idx++;
	}
	return (str);
}

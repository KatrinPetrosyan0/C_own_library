/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 19:53:56 by kpetrosy          #+#    #+#             */
/*   Updated: 2021/01/25 19:58:41 by kpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*buffer;

	if (!(buffer = (void *)malloc(size * nitems)))
		return (NULL);
	ft_bzero(buffer, size * nitems);
	return (buffer);
}

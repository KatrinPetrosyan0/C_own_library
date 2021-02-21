/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpetrosy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 18:31:22 by kpetrosy          #+#    #+#             */
/*   Updated: 2021/01/28 18:31:43 by kpetrosy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		idx;
	t_list	*position;

	idx = 0;
	position = lst;
	while (position != NULL)
	{
		position = position->next;
		idx++;
	}
	return (idx);
}

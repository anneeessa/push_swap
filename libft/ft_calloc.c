/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:07:13 by anmohamm          #+#    #+#             */
/*   Updated: 2024/01/19 19:25:15 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;
	size_t	n;

	i = 0;
	n = size * count;
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	ptr = (malloc(n));
	if (!ptr)
		return (0);
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

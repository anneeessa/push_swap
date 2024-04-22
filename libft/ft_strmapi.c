/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:22:42 by anmohamm          #+#    #+#             */
/*   Updated: 2024/01/19 19:22:46 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Applies the function ’f’ to each character of the
	string ’s’, and passing its index as first argument
	to create a new string (with malloc(3)) resulting
	from successive applications of ’f’.
	s: The string on which to iterate.
	f: The function to apply to each character.
	Returns the string created from the successive applications of ’f’.
	Returns NULL if the allocation fails.
*/

#include "libft.h"

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!s || !f)
		return (0);
	ptr = (char *) malloc (sizeof(char) * ft_strlen(s) + 1);
	if (!ptr)
		return (0);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:21:08 by anmohamm          #+#    #+#             */
/*   Updated: 2024/01/19 19:29:13 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* A file identifier is a number that identifies and opens a
file in the computers operating system */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	num = n;
	if (num < 0)
	{
		write (fd, "-", 1);
		num *= -1;
	}
	if (num >= 10)
		ft_putnbr_fd(num / 10, fd);
	c = 48 + (num % 10);
	write (fd, &c, 1);
}

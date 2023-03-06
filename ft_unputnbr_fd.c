/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unputnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnegre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:43:47 by pnegre            #+#    #+#             */
/*   Updated: 2023/03/06 08:18:32 by pnegre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_unputnbr_fd(unsigned int n, int fd, int *len)
{
	char	nb;

	if (n >= 10)
	{
		ft_putnbr_unsign_fd(n / 10, fd, len);
		ft_putnbr_unsign_fd(n % 10, fd, len);
	}
	else
	{
		nb = n + '0';
		ft_putchar_fd(nb, fd, len);
	}
}

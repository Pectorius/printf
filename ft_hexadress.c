/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnegre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 13:27:31 by pnegre            #+#    #+#             */
/*   Updated: 2023/03/06 08:15:57 by pnegre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_ptrhex(uintptr_t nb, int *len)
{
	if (nb >= 16)
	{
		ft_ptrhex(nb / 16, len);
		ft_ptrhex(nb % 16, len);
	}
	else
	{
		if (nb <= 9)
			ft_putchar_fd((nb + 48), 1, len);
		else
			ft_putchar_fd((nb - 10 + 'a'), 1, len);
	}
}

void	ft_hex_adress(unsigned long long nb, int *len)
{
	if (nb == 0)
		ft_putstr_fd("(nil)", 1, len);
	else
	{
		ft_putstr_fd("0x", 1, len);
		ft_ptrhex(nb, len);
	}
}

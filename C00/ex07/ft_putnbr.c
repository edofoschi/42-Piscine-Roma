/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efoschi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:10:43 by efoschi           #+#    #+#             */
/*   Updated: 2023/11/30 18:19:01 by efoschi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int		u_nb;
	unsigned long int	n_c;
	int					n;
	char				c;

	n_c = 1;
	if (nb < 0)
	{
		write(1, "-", 1);
		u_nb = nb * -1;
	}
	else
		u_nb = nb;
	while (u_nb % (n_c * 10) != u_nb)
	{
		n_c *= 10;
	}
	while (n_c > 0)
	{
		n = (u_nb / n_c) % 10;
		c = '0' + n;
		write(1, &c, 1);
		n_c /= 10;
	}
}

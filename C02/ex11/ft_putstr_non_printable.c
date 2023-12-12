/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efoschi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:27:48 by efoschi           #+#    #+#             */
/*   Updated: 2023/12/05 12:31:32 by efoschi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	char	hexa[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

	while (*str)
	{
		if((*str >= 0 && *str <= 31) || *str >= 127)
		{
			ft_putchar('\\');

			int	a = (*str / 16);
			int	b = (*str % 16);

			ft_putchar(hexa[a]);
			ft_putchar(hexa[b]);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}

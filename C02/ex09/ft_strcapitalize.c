/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efoschi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 08:34:11 by efoschi           #+#    #+#             */
/*   Updated: 2023/12/05 09:20:03 by efoschi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] >= 'a' && str[0] <='z')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if(!(str[i - 1] >= '0'&& str[i - 1] <= '9'))
				{
					if(!(str[i - 1] <= 'Z' && str[i - 1] >= 'A'))
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}

			
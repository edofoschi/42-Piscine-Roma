/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efoschi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 09:20:29 by efoschi           #+#    #+#             */
/*   Updated: 2023/12/05 11:27:01 by efoschi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;

    i = 0;
    size -= 1;
    while (src[i] && (i < size))
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (i);
}

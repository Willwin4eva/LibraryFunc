/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olboothe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 13:12:18 by olboothe          #+#    #+#             */
/*   Updated: 2019/04/08 20:58:43 by olboothe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;

	i = ft_strlen(dest);
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

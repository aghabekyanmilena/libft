/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 00:39:39 by miaghabe          #+#    #+#             */
/*   Updated: 2024/11/17 01:32:10 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	str_size;

	str_size = (int) ft_strlen(str) - 1;
	if (c == '\0')
		return ((char *)str + str_size + 1);
	while (str_size >= 0)
	{
		if (str[str_size] == (char)c)
			return ((char *)str + str_size);
		str_size--;
	}
	return (0);
}

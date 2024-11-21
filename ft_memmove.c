/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miaghabe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:15:54 by miaghabe          #+#    #+#             */
/*   Updated: 2024/11/17 01:12:34 by miaghabe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_overlap(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if ((d >= s && d < s + n) || (s >= d && s < d + n))
		return (1);
	return (0);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == 0 || s == 0)
		return (dest);
	if (is_overlap(d, s, n))
	{
		d += n;
		s += n;
		while (n--)
			*(--d) = *(--s);
	}
	else
		ft_memcpy(d, s, n);
	return (dest);
}

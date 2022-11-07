/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:04:45 by mrichard          #+#    #+#             */
/*   Updated: 2022/07/29 12:18:39 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = -1;
	while ((*s1 || *s2) && ++i < n)
	{
		if (*s1 != *s2)
		{
			if (*s1 > *s2)
				return (1);
			return (-1);
		}
		s1++;
		s2++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[6] = "123457";
	char s2[6] = "123456";
	int n;

	n = 4;
	printf("%d\n", ft_strncmp(s1, s2, n));
	return (0);
}*/

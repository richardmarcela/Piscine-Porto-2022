/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:59:14 by mrichard          #+#    #+#             */
/*   Updated: 2022/07/30 15:59:41 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else if (nb == 32)
		return (2147483647);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int main()
{
	printf("%d\n", ft_recursive_factorial(5));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 21:05:40 by mrichard          #+#    #+#             */
/*   Updated: 2022/08/01 21:05:58 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = 0;
	if (min >= max)
		return (ptr);
	ptr = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
/*
void	print_test(int *test, int size)
{
	int i;
	for (i = 0; i < size - 1; i++)
	{
		printf("%d - ", test[i]);
	}
	if (size > 0)
		printf("%d\n", test[size - 1]);
}

int	main(void)
{
	int *test0;
	int *test1;
	int *test2;
	int *test3;
	int *test4;
	test0 = ft_range(1, 11);
	printf("\n* test0 (1, 11): ");
	print_test(test0, 10);
	test1 = ft_range(2, 1);
	printf("\n* test1 (2, 1): ");
	print_test(test1, 0);
	test2 = ft_range(3, 3);
	printf("\n* test2 (3, 3): ");
	print_test(test2, 0);
	test3 = ft_range(4, 41);
	printf("\n* test4 (4, 41): ");
	print_test(test3, 37);
	test4 = ft_range(10, -10);
	printf("\n* test4 (10, -10): ");
	print_test(test4, 0);
}*/

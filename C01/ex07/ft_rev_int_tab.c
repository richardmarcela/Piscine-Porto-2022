/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:25:12 by mrichard          #+#    #+#             */
/*   Updated: 2022/07/21 12:52:36 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i <= j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
int main()
{
	int tab[] = {1, 2, 3, 4};
	int size = 4;

	for(int i = 0; i < size; i++)
	{
		printf("%d\n", tab[i]);
	}
	ft_rev_int_tab(tab, size);

	for(int i = 0; i < size; i++)
	{
		printf("%d", tab[i]);
	}
}*/ 

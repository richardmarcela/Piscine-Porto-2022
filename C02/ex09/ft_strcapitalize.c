/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrichard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 17:37:25 by mrichard          #+#    #+#             */
/*   Updated: 2022/07/24 17:39:01 by mrichard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 0;
	x = 0;
	while (str[i] != '\0')
	{
		if (x == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			x++;
		}
		else if (x > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if (str[i] < '0' || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			x = 0;
		else
			x++;
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char	str[58] = "hEy, tUDo bEm? 42pAlAvRAs qUArENta-d-dUAs; cINQUENTa+e+uM";

	printf("%s\n", str);

	ft_strcapitalize(str);

	printf("%s\n", str);
}*/

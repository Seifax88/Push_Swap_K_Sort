/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgargant <dgargant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 09:51:28 by dgargant          #+#    #+#             */
/*   Updated: 2024/06/26 12:59:22 by dgargant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	neg;
	int	nb;

	i = 0;
	neg = 1;
	nb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == 45)
	{
		neg *= -1;
		i++;
	}
	else if (str[i] == 43)
		i++;
	while ((str[i] >= 48 && str[i] <= 57) && str[i] != '\0')
	{
		nb = nb * 10 + (str[i] - 48);
		if (!(str[i + 1] >= 48 && str[i + 1] <= 57))
			return (nb * neg);
		i++;
	}
	return (0);
}

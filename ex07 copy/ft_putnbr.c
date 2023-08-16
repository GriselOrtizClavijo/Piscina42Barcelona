/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gortiz-c <gortiz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:25:58 by gortiz-c          #+#    #+#             */
/*   Updated: 2023/08/16 19:24:35 by gortiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	buffer[12];
	int		index;

	index = 0
		if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
		while (nb > 0){
		buffer[index++] = '0' + (nb % 10);
		nb /= 10;
	}
	for (int i = index - 1; i >= 0; i--){
		write(1, &buffer[i], 1);
	}
}

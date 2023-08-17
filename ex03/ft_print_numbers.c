/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gortiz-c <gortiz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:58:11 by gortiz-c          #+#    #+#             */
/*   Updated: 2023/08/14 20:01:52 by gortiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_numbers(void)
{
	int	numbers;

	numbers = '0';
	while (numbers >= '0' && numbers <= '9')
	{
		write(1, &numbers, 1);
		numbers++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gortiz-c <gortiz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:04:11 by gortiz-c          #+#    #+#             */
/*   Updated: 2023/08/17 16:25:15 by gortiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	num1;
	int	num2;
	int	num3;
	char	output[8];

	num1 = 0;
	while (num1 <= 7)
	{
		num2 = num1 + 1;
		while (num2 <= 8)
		{
			num3 = num2 + 1;
			while (num3 <= 9)
			{
				snprintf(output, sizeof(output), "%d%d%d", num1, num2, num3);
				write(1, output, 3);
				if (!(num1 == 7 && num2 == 8 && num3 == 9)){
					char comma = ',';
					char space = ' ';
					write(1, &comma, 1);
					write(1, &space, 1);}
				num3++;}
			num2++;}
		num1++;}
	char newline;
	newline = '\n';
	write(1, &newline, 1);
}

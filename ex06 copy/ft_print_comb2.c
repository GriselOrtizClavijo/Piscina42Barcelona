/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gortiz-c <gortiz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:20:28 by gortiz-c          #+#    #+#             */
/*   Updated: 2023/08/16 18:24:20 by gortiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_print_comb2(void)
{
	int	i;	
	int	j;

	i = 0;
	j = 0
		while (i <= 99)
	{
		while (j <= 99)
	{
		char output[8]; // Para almacenar el formato de impresión
				snprintf(output, sizeof(output), "%02d %02d", i, j);
				write(1, output, sizeof(output) - 1);
				if (i != 99 || j != 99){
					char comma = ',';
					char space = ' ';
					write(1, &comma, 1);
					write(1, &space, 1);
				}
				j++;
			}
			i++;
			j = 0;
		}
	char newline = '\n';
	write(1, &newline, 1);
}

/*
   int main()
   {
   ft_print_comb();

   return 0;
   }*/

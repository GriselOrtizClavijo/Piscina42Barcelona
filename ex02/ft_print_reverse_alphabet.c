/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gortiz-c <gortiz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:55:10 by gortiz-c          #+#    #+#             */
/*   Updated: 2023/08/17 16:16:14 by gortiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	abc;

	abc = 'z';
	while (abc >= 'a')
	{
		write(1, &abc, 1);
		abc --;
	}
}

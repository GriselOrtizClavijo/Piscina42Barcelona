/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gortiz-c <gortiz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:09:21 by gortiz-c          #+#    #+#             */
/*   Updated: 2023/08/14 19:31:12 by gortiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	abc;

	abc = 'a'
		while (abc <= 'z')
	{
		write(1, &abc, 1);
		abc ++;
	}
}
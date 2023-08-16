/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gortiz-c <gortiz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 19:44:23 by gortiz-c          #+#    #+#             */
/*   Updated: 2023/08/16 20:23:34 by gortiz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	char	buffer[0];
	int		current;
	int		start;

	current = 0;
	start = 0
		if (n <= 0 || n >= 10)
		return;
	while (current >= 0)
	{
		if (current == n)
		{
			int	i = 0;
			while (i < n)
				ft_putchar(buffer[i++]);
				if (buffer[0] != '9' - n + 1) {
				ft_putchar(',');
				ft_putchar(' ');
			}
			current--;
			continue ;
		}
		if (start > 9)
		{
			current--;
			if (current >= 0)
				start = buffer[current] - '0' + 1;
			continue;
		}
		buffer[current] = start + '0';
		start++;
		current++;
		if (current < n)
			start = buffer[current - 1] - '0' + 1;
	}
	ft_putchar('\n');
}

/*int main() {
  int n = 2;

  ft_print_combn(n);

  return 0;
  }*/


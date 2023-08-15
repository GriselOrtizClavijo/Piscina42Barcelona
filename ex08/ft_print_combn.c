#include <unistd.h>

void ft_putchar(char c) {
	write(1, &c, 1);
}

void ft_print_combn_recursive(int n, int start, int current, char *buffer) {
	if (current == n) {
		ft_putchar(buffer[0]);
		for (int i = 1; i < n; i++) {
			ft_putchar(buffer[i]);
		}
		if (buffer[0] != '9' - n + 1) {
			ft_putchar(',');
			ft_putchar(' ');
		}
		return;
	}

	for (int i = start; i <= 9; i++) {
		buffer[current] = i + '0';
		ft_print_combn_recursive(n, i + 1, current + 1, buffer);
	}
}

void ft_print_combn(int n) {
	if (n <= 0 || n >= 10) {
		return;
	}

	char buffer[n];
	ft_print_combn_recursive(n, 0, 0, buffer);
	ft_putchar('\n');
}

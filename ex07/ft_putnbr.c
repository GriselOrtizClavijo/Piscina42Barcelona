#include <unistd.h>

void ft_putnbr(int nb) {
	if (nb == 0) {
		write(1, "0", 1);
		return;
	}

	if (nb < 0) {
		write(1, "-", 1);
		nb = -nb;
	}

	char buffer[12];
	int index = 0;

	while (nb > 0) {
		buffer[index++] = '0' + (nb % 10);
		nb /= 10;
	}

	for (int i = index - 1; i >= 0; i--) {
		write(1, &buffer[i], 1);
	}
}

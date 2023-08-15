#include <unistd.h>

void ft_print_comb(void)
{
    int num1 = 0;

    while (num1 <= 9) {
        int num2 = num1 + 1;

        while (num2 <= 9) {
            int num3 = num2 + 1;

            while (num3 <= 9) {
                printf("%d%d%d", num1, num2, num3);

                if (num1 != 7 || num2 != 8 || num3 != 9) {
                    printf(", ");
                }

                num3++;
            }

            num2++;
        }

        num1++;
    }

    printf("\n");
}

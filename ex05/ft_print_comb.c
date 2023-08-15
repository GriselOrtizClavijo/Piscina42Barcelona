#include <unistd.h>
/*#include <stdio.h>*/

void ft_print_comb(void){

	int numA;

	numA	= 0;
	
		while(numA <= 98){
		int numB = numA + 1;

			while(numB <=99){
			char numA_str[3];
			char numB_str[3];

		sprintf(numA_str, "%02d", numA);
		sprintf(numB_str, "%02d", numB);


		write(1,numA_str, 2);
		write(1," ", 1);
		write(1,numB_str, 2);

		if(numA != 98 || numB != 99){
			write(1,", ", 2);

			}
		numB++;

		}
		numA++;	
	}
	write(1,"\n", 1);

}

/*
int main()
{
    ft_print_comb();

    return 0;
}*/

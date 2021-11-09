#include <stdio.h>
#include <stdlib.h>

void main(){
	char g = 'M';
	int number = 10;
	short int short_number = 1;
	float f_number = 1.5;

	printf("allocated space to char %d \n",sizeof(g));
	printf("allocated space to int %d \n",sizeof(number));
	printf("allocated space to short int %d \n",sizeof(short_number));
	printf("allocated space to number %d \n",sizeof(f_number));
}

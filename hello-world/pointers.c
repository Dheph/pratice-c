#include <stdio.h>

void main() {
	
	int year = 2000;
	int *pointer_to_year = &year;

	printf("pointer data : %p", pointer_to_year);
	printf("\n variable with pointer data : %d ", *pointer_to_year);
	printf("\n pointer address %p", &pointer_to_year);
}

#include <stdio.h>

int * alloc(){
	return malloc(200);
}

void main() {
	int * memo;
	memo = alloc();

	if(memo != NULL){
		printf("Memory allocated successfully!!");
		printf("\n Memory address : %x ", memo);
		printf("\n Memory size : %d ", sizeof(memo));
	}
	else {
		printf("Memory allocation fail");
	}
}

#include<stdio.h>

void main(){

	char name[30];
	
	printf("\n what your name ? ");
	fflush(stdin);
	fgets(name,30,stdin);
	printf("welcome %s ", name);


	//read blank spaces with fflush and fgets
}

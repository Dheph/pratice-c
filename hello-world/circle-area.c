#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

float po(float base, int expo){
	if(expo == 0) return 1;
	return base * po(base,expo-1);
}

void main(){

	float area, r;

	printf("Input circle radius: \n");
	scanf("%f",&r);
	area = PI*(po(r,2));

	printf("Circle area is: %2.f",area);
}

#include<stdio.h>

struct car{
	char model[20];
	int year;
};

void main(){

 struct car carData1;

 printf("\n Input car model: ");

 scanf("%s",carData1.model);

 printf("\n Input car year: ");

 scanf("%d",&carData1.year);

 printf("\n car model %s and car year %d : ", carData1.model, carData1.year);

}

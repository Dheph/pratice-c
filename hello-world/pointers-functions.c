#include <stdio.h>

int* randomGenerate(){
	static int r[10];
	int a;

	for(a = 0; a <10 ; ++a) {
		r[a] = rand();
		printf("r[%d] = %d\n",a, r[a]);
	}
	return r;
}

void main(){

	int *p;
	int i;

	p = randomGenerate();

	for(i = 0; i< 10; ++i){
			printf("r[%d] = %d\n",p, *(p + i));
	}
}

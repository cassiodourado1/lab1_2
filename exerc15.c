#include <stdio.h>
#include <math.h>

int main(){
	int numInt1,numInt2;
	float numRea;
	
	
	scanf("%d %d %f", &numInt1,&numInt2,&numRea);
	
	printf("%f\n", 2.0*numInt1 + numInt2/2.0);
	
	printf("%f\n", 3.0*numInt1 + numRea);
	
	printf("%f\n",pow((numRea),3));
}

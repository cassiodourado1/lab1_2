#include <stdio.h>

int main(){
	float area, raio;
		
	printf("Digite o raio");
	scanf("%f", &raio);
	
	area = 3.141592*raio*raio;
	
	printf("a area e: %d", area);
	
	return (0);
}

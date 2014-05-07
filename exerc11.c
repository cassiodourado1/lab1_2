#include <stdio.h>

int main(){
	
	int lado;
	
	printf("Digite o tamanho do lado");
	scanf("%d", &lado);
	
	printf("A area do quadrado e %d\n", lado*lado);
	
	printf("O dobro da area do quadrado e %d", lado*lado*2);
	
	return(0);
}

#include <stdio.h>

int main(){
	
	int  tamanhoM, tamanhoCm;
	
	printf("Digite o tamanho em metros");
	scanf("%d", &tamanhoM);
	
	tamanhoCm = tamanhoM*100;
	
	printf("o tamanho em centimetros �: %d", tamanhoCm);
	
	return (0);
	
}
